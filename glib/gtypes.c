#include <glibconfig.h>
#include <gtypes.h>

void
g_destroy_notify_to_func (gpointer data, gpointer user_data)
{
  ((GDestroyNotify)user_data)(data);
}

gint
g_compare_func_to_compare_data_func (gconstpointer a, gconstpointer b, gpointer user_data)
{
  return ((GCompareFunc)user_data)(a, b);
} 
