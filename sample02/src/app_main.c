/**
 * app_main.c
 *
 * https://prognotes.net/2015/07/gtk-3-glade-c-programming-template/
 * https://stackoverflow.com/questions/4864866/c-c-with-gcc-statically-add-resource-files-to-executable-library
 * 2021-08-25
 */
#include <gtk/gtk.h>
#include <glib.h>

G_MODULE_EXPORT void on_window_main_destroy();



/**
 * https://blog.csdn.net/mhpmii/article/details/50594295
 */
static void my_log_handler(const gchar *log_domain, GLogLevelFlags log_level, const gchar *message, gpointer user_data)
{
    g_print("{%s}\n", message);
}


int main(int argc, char *argv[])
{
    GtkBuilder      *builder; 
    GtkWidget       *window;

    gtk_init(&argc, &argv);

    g_log_set_handler(NULL, G_LOG_LEVEL_DEBUG|G_LOG_FLAG_FATAL|G_LOG_FLAG_RECURSION, my_log_handler, "main");

    // builder = gtk_builder_new();
    // gtk_builder_add_from_file(builder, "glade/window_main.glade", NULL);
	builder = gtk_builder_new_from_file("glade/window_main.glade");

    window = GTK_WIDGET(gtk_builder_get_object(builder, "window_main"));
    gtk_builder_connect_signals(builder, NULL);

    g_object_unref(builder);

    gtk_widget_show(window);                
    gtk_main();

    return 0;
}

// called when window is closed
void on_window_main_destroy()
{
    g_message("[%s:%d - %s] gtk_main_quit()", __FILE__, __LINE__, __FUNCTION__);

    gtk_main_quit();
}