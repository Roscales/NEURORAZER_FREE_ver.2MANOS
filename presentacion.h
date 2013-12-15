void PRESENTACION (void)
{
      portada_y_salida = load_bitmap ("graficos/portada-y-salida.pcx", paleta); 
      draw_sprite(screen, portada_y_salida, 0, 0);
      clear_keybuf();
     
     do
     {    
     textprintf(screen, font, 20,250, palette_color[12], "NEURORAZER, Edicion FREE version 2MANOS ");
     textprintf(screen, font, 20,265, palette_color[10], "COCHE 1 - Teclas: Z=Derecha X=Izquierda ");
     textprintf(screen, font, 20,280, palette_color[10], "COCHE 2 - Teclas: M=Derecha N=Izquierda ");
     textprintf(screen, font, 20,295, palette_color[10], "Y la Barra Espaciadora para Eliminar el AVISO del Punto Rojo en Pantalla");
     
     textprintf(screen, font, 20,350, palette_color[10], "PULSA ENTER-INTRO cuando est�s listo");
     
     
     textprintf(screen, font, 20,400, palette_color[9], "Distribuido Open Source bajo licencias GPL-GNU. Y bajo las condiciones CC");
     textprintf(screen, font, 20,410, palette_color[9], "indicadas: autoria, no comercial, open source, y se permite editar codigo");

     textout(screen, font,  programadores , 20, 460, palette_color[9]); 
     textout(screen, font,  version_ultima, 20, 470, palette_color[9]); 
    

     
          if  (key[KEY_ESC]) 
          {
          destroy_bitmap(portada_y_salida);
          allegro_exit();
          remove_sound();
          poll_keyboard();
          } 
     } while (!key[KEY_ENTER]);
     clear_keybuf();
     destroy_bitmap(portada_y_salida);
     return;     
}