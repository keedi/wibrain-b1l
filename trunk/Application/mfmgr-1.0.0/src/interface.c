/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_MFmgr (void)
{
  //- GtkWidget *MFmgr;
  GtkWidget *hbox1;
  GtkWidget *frame1;
  GtkWidget *alignment1;
  GtkWidget *vbox5;
  //- GtkWidget *radiobtn_Fan_Silent;
  GSList *radiobtn_Fan_Silent_group = NULL;
  //- GtkWidget *radiobtn_Fan_Normal;
  //- GtkWidget *radiobtn_Fan_Cool;
  GtkWidget *btn_Calibrate;
  GtkWidget *label_Fan;
  GtkWidget *vbox2;
  GtkWidget *frame2;
  GtkWidget *alignment2;
  GtkWidget *hbox2;
  //- GtkWidget *radiobtn_LED_On;
  GSList *radiobtn_LED_On_group = NULL;
  //- GtkWidget *radiobtn_Auto;
  //- GtkWidget *radiobtn_Off;
  GtkWidget *label_LED_key;
  GtkWidget *frame3;
  GtkWidget *alignment3;
  GtkWidget *hbox3;
  GtkWidget *vbox3;
  GtkWidget *vbox4;
  GtkWidget *hbox4;
  //- GtkWidget *radiobtn_touchPad_enable;
  GSList *radiobtn_touchPad_enable_group = NULL;
  //- GtkWidget *radiobtn_touchPad_disable;
  //- GtkWidget *radiobtn_touchPad_only;
  GtkWidget *label_touchPad;

  MFmgr = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_size_request (MFmgr, 300, 180);
  gtk_window_set_title (GTK_WINDOW (MFmgr), _("MFmgr"));
  gtk_window_set_resizable (GTK_WINDOW (MFmgr), FALSE);

  hbox1 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (MFmgr), hbox1);
  gtk_widget_set_size_request (hbox1, 240, 100);

  frame1 = gtk_frame_new (NULL);
  gtk_widget_show (frame1);
  gtk_box_pack_start (GTK_BOX (hbox1), frame1, TRUE, TRUE, 0);
  gtk_widget_set_size_request (frame1, 110, 100);

  alignment1 = gtk_alignment_new (0.5, 0.5, 1, 1);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (frame1), alignment1);
  gtk_alignment_set_padding (GTK_ALIGNMENT (alignment1), 0, 15, 10, 0);

  vbox5 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox5);
  gtk_container_add (GTK_CONTAINER (alignment1), vbox5);

  radiobtn_Fan_Silent = gtk_radio_button_new_with_mnemonic (NULL, _("Silent Mode"));
  gtk_widget_show (radiobtn_Fan_Silent);
  gtk_box_pack_start (GTK_BOX (vbox5), radiobtn_Fan_Silent, TRUE, TRUE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobtn_Fan_Silent), radiobtn_Fan_Silent_group);
  radiobtn_Fan_Silent_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobtn_Fan_Silent));

  radiobtn_Fan_Normal = gtk_radio_button_new_with_mnemonic (NULL, _("Normal Mode"));
  gtk_widget_show (radiobtn_Fan_Normal);
  gtk_box_pack_start (GTK_BOX (vbox5), radiobtn_Fan_Normal, TRUE, TRUE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobtn_Fan_Normal), radiobtn_Fan_Silent_group);
  radiobtn_Fan_Silent_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobtn_Fan_Normal));

  radiobtn_Fan_Cool = gtk_radio_button_new_with_mnemonic (NULL, _("Cool Mode"));
  gtk_widget_show (radiobtn_Fan_Cool);
  gtk_box_pack_start (GTK_BOX (vbox5), radiobtn_Fan_Cool, TRUE, TRUE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobtn_Fan_Cool), radiobtn_Fan_Silent_group);
  radiobtn_Fan_Silent_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobtn_Fan_Cool));

  btn_Calibrate = gtk_button_new_with_mnemonic (_("Calibrate"));
  gtk_widget_show (btn_Calibrate);
  gtk_box_pack_start (GTK_BOX (vbox5), btn_Calibrate, FALSE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (btn_Calibrate), 6);

  label_Fan = gtk_label_new (_("<b>Fan Speed</b>"));
  gtk_widget_show (label_Fan);
  gtk_frame_set_label_widget (GTK_FRAME (frame1), label_Fan);
  gtk_label_set_use_markup (GTK_LABEL (label_Fan), TRUE);
  gtk_label_set_justify (GTK_LABEL (label_Fan), GTK_JUSTIFY_CENTER);

  vbox2 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox2);
  gtk_box_pack_start (GTK_BOX (hbox1), vbox2, TRUE, TRUE, 0);

  frame2 = gtk_frame_new (NULL);
  gtk_widget_show (frame2);
  gtk_box_pack_start (GTK_BOX (vbox2), frame2, TRUE, TRUE, 0);
  gtk_widget_set_size_request (frame2, 120, 50);

  alignment2 = gtk_alignment_new (0.5, 0.5, 1, 1);
  gtk_widget_show (alignment2);
  gtk_container_add (GTK_CONTAINER (frame2), alignment2);
  gtk_alignment_set_padding (GTK_ALIGNMENT (alignment2), 0, 0, 6, 0);

  hbox2 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox2);
  gtk_container_add (GTK_CONTAINER (alignment2), hbox2);
  gtk_widget_set_size_request (hbox2, -1, 10);

  radiobtn_LED_On = gtk_radio_button_new_with_mnemonic (NULL, _("On"));
  gtk_widget_show (radiobtn_LED_On);
  gtk_box_pack_start (GTK_BOX (hbox2), radiobtn_LED_On, TRUE, TRUE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobtn_LED_On), radiobtn_LED_On_group);
  radiobtn_LED_On_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobtn_LED_On));

  radiobtn_Auto = gtk_radio_button_new_with_mnemonic (NULL, _("Auto"));
  gtk_widget_show (radiobtn_Auto);
  gtk_box_pack_start (GTK_BOX (hbox2), radiobtn_Auto, TRUE, TRUE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobtn_Auto), radiobtn_LED_On_group);
  radiobtn_LED_On_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobtn_Auto));

  radiobtn_Off = gtk_radio_button_new_with_mnemonic (NULL, _("Off"));
  gtk_widget_show (radiobtn_Off);
  gtk_box_pack_start (GTK_BOX (hbox2), radiobtn_Off, TRUE, TRUE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobtn_Off), radiobtn_LED_On_group);
  radiobtn_LED_On_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobtn_Off));

  label_LED_key = gtk_label_new (_("<b>Keyboard Backlight</b>"));
  gtk_widget_show (label_LED_key);
  gtk_frame_set_label_widget (GTK_FRAME (frame2), label_LED_key);
  gtk_label_set_use_markup (GTK_LABEL (label_LED_key), TRUE);

  frame3 = gtk_frame_new (NULL);
  gtk_widget_show (frame3);
  gtk_box_pack_start (GTK_BOX (vbox2), frame3, TRUE, TRUE, 0);
  gtk_widget_set_size_request (frame3, 110, 50);

  alignment3 = gtk_alignment_new (0.5, 0.5, 1, 1);
  gtk_widget_show (alignment3);
  gtk_container_add (GTK_CONTAINER (frame3), alignment3);
  gtk_alignment_set_padding (GTK_ALIGNMENT (alignment3), 0, 0, 6, 0);

  hbox3 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment3), hbox3);

  vbox3 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox3);
  gtk_box_pack_start (GTK_BOX (hbox3), vbox3, TRUE, TRUE, 0);

  vbox4 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox4);
  gtk_box_pack_start (GTK_BOX (vbox3), vbox4, TRUE, TRUE, 0);

  hbox4 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox4);
  gtk_box_pack_start (GTK_BOX (vbox4), hbox4, TRUE, TRUE, 0);

  radiobtn_touchPad_enable = gtk_radio_button_new_with_mnemonic (NULL, _("Enable"));
  gtk_widget_show (radiobtn_touchPad_enable);
  gtk_box_pack_start (GTK_BOX (hbox4), radiobtn_touchPad_enable, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobtn_touchPad_enable), radiobtn_touchPad_enable_group);
  radiobtn_touchPad_enable_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobtn_touchPad_enable));

  radiobtn_touchPad_disable = gtk_radio_button_new_with_mnemonic (NULL, _("Disable"));
  gtk_widget_show (radiobtn_touchPad_disable);
  gtk_box_pack_start (GTK_BOX (hbox4), radiobtn_touchPad_disable, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobtn_touchPad_disable), radiobtn_touchPad_enable_group);
  radiobtn_touchPad_enable_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobtn_touchPad_disable));

  radiobtn_touchPad_only = gtk_radio_button_new_with_mnemonic (NULL, _("Only tapping \nand scrolling Off"));
  gtk_widget_show (radiobtn_touchPad_only);
  gtk_box_pack_start (GTK_BOX (vbox4), radiobtn_touchPad_only, TRUE, TRUE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobtn_touchPad_only), radiobtn_touchPad_enable_group);
  radiobtn_touchPad_enable_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobtn_touchPad_only));

  label_touchPad = gtk_label_new (_("<b>TouchPad</b>"));
  gtk_widget_show (label_touchPad);
  gtk_frame_set_label_widget (GTK_FRAME (frame3), label_touchPad);
  gtk_label_set_use_markup (GTK_LABEL (label_touchPad), TRUE);

  g_signal_connect ((gpointer) MFmgr, "show",
                    G_CALLBACK (on_MFmgr_show),
                    NULL);
  g_signal_connect ((gpointer) MFmgr, "destroy",
                    G_CALLBACK (on_MFmgr_destroy),
                    NULL);
  g_signal_connect ((gpointer) radiobtn_Fan_Silent, "focus_in_event",
                    G_CALLBACK (on_radiobtn_Fan_Silent_focus_in_event),
                    NULL);
  g_signal_connect ((gpointer) radiobtn_Fan_Normal, "focus_in_event",
                    G_CALLBACK (on_radiobtn_Fan_Normal_focus_in_event),
                    NULL);
  g_signal_connect ((gpointer) radiobtn_Fan_Cool, "focus_in_event",
                    G_CALLBACK (on_radiobtn_Fan_Cool_focus_in_event),
                    NULL);
  g_signal_connect ((gpointer) btn_Calibrate, "released",
                    G_CALLBACK (on_btn_Calibrate_released),
                    NULL);
  g_signal_connect ((gpointer) radiobtn_LED_On, "focus_in_event",
                    G_CALLBACK (on_radiobtn_LED_On_focus_in_event),
                    NULL);
  g_signal_connect ((gpointer) radiobtn_Auto, "focus_in_event",
                    G_CALLBACK (on_radiobtn_Auto_focus_in_event),
                    NULL);
  g_signal_connect ((gpointer) radiobtn_Off, "focus_in_event",
                    G_CALLBACK (on_radiobtn_Off_focus_in_event),
                    NULL);
  g_signal_connect ((gpointer) radiobtn_touchPad_enable, "focus_in_event",
                    G_CALLBACK (on_radiobtn_touchPad_enable_focus_in_event),
                    NULL);
  g_signal_connect ((gpointer) radiobtn_touchPad_disable, "released",
                    G_CALLBACK (on_radiobtn_touchPad_disable_released),
                    NULL);
  g_signal_connect ((gpointer) radiobtn_touchPad_disable, "toggled",
                    G_CALLBACK (on_radiobtn_touchPad_disable_toggled),
                    NULL);
  g_signal_connect ((gpointer) radiobtn_touchPad_disable, "focus_in_event",
                    G_CALLBACK (on_radiobtn_touchPad_disable_focus_in_event),
                    NULL);
  g_signal_connect ((gpointer) radiobtn_touchPad_only, "focus_in_event",
                    G_CALLBACK (on_radiobtn_touchPad_only_focus_in_event),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (MFmgr, MFmgr, "MFmgr");
  GLADE_HOOKUP_OBJECT (MFmgr, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (MFmgr, frame1, "frame1");
  GLADE_HOOKUP_OBJECT (MFmgr, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (MFmgr, vbox5, "vbox5");
  GLADE_HOOKUP_OBJECT (MFmgr, radiobtn_Fan_Silent, "radiobtn_Fan_Silent");
  GLADE_HOOKUP_OBJECT (MFmgr, radiobtn_Fan_Normal, "radiobtn_Fan_Normal");
  GLADE_HOOKUP_OBJECT (MFmgr, radiobtn_Fan_Cool, "radiobtn_Fan_Cool");
  GLADE_HOOKUP_OBJECT (MFmgr, btn_Calibrate, "btn_Calibrate");
  GLADE_HOOKUP_OBJECT (MFmgr, label_Fan, "label_Fan");
  GLADE_HOOKUP_OBJECT (MFmgr, vbox2, "vbox2");
  GLADE_HOOKUP_OBJECT (MFmgr, frame2, "frame2");
  GLADE_HOOKUP_OBJECT (MFmgr, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (MFmgr, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (MFmgr, radiobtn_LED_On, "radiobtn_LED_On");
  GLADE_HOOKUP_OBJECT (MFmgr, radiobtn_Auto, "radiobtn_Auto");
  GLADE_HOOKUP_OBJECT (MFmgr, radiobtn_Off, "radiobtn_Off");
  GLADE_HOOKUP_OBJECT (MFmgr, label_LED_key, "label_LED_key");
  GLADE_HOOKUP_OBJECT (MFmgr, frame3, "frame3");
  GLADE_HOOKUP_OBJECT (MFmgr, alignment3, "alignment3");
  GLADE_HOOKUP_OBJECT (MFmgr, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (MFmgr, vbox3, "vbox3");
  GLADE_HOOKUP_OBJECT (MFmgr, vbox4, "vbox4");
  GLADE_HOOKUP_OBJECT (MFmgr, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (MFmgr, radiobtn_touchPad_enable, "radiobtn_touchPad_enable");
  GLADE_HOOKUP_OBJECT (MFmgr, radiobtn_touchPad_disable, "radiobtn_touchPad_disable");
  GLADE_HOOKUP_OBJECT (MFmgr, radiobtn_touchPad_only, "radiobtn_touchPad_only");
  GLADE_HOOKUP_OBJECT (MFmgr, label_touchPad, "label_touchPad");

  return MFmgr;
}
