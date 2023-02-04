RuinsOfAlph_S1_MapScripts::
	.byte 0

RuinsOfAlphS1_1::
end



RuinsOfAlphS1_2::
end



RuinsOfAlphS1_3::
end



RuinsOfAlphS1_4::
end



RuinsOfAlphS1_5::
end



RuinsOfAlphS1_6::
end



RuinsOfAlphS1_7::
end



RuinsOfAlphS1_8::
end



RuinsOfAlphS1_9::
end



RuinsOfAlphS1_10::
end



RuinsOfAlphS1_11::
end



RuinsOfAlphS1_13::
end



RuinsOfAlphS1_14::
end



RuinsOfAlphS1_16::
end

RuinsOfAlph_S1_Combate_UnownDorado::
msgbox RuinsOfAlph_S1_Combate_UnownDorado_Texto_1 MSGBOX_AUTOCLOSE
msgbox RuinsOfAlph_S1_Combate_UnownDorado_Texto_2 MSGBOX_AUTOCLOSE
msgbox RuinsOfAlph_S1_Combate_UnownDorado_Texto_3 MSGBOX_AUTOCLOSE
msgbox RuinsOfAlph_S1_Combate_UnownDorado_Texto_4 MSGBOX_AUTOCLOSE
msgbox RuinsOfAlph_S1_Combate_UnownDorado_Texto_5 MSGBOX_AUTOCLOSE
msgbox RuinsOfAlph_S1_Combate_UnownDorado_Texto_6 MSGBOX_AUTOCLOSE
msgbox RuinsOfAlph_S1_Combate_UnownDorado_Texto_7 MSGBOX_AUTOCLOSE
msgbox RuinsOfAlph_S1_Combate_UnownDorado_Texto_8 MSGBOX_AUTOCLOSE
msgbox RuinsOfAlph_S1_Combate_UnownDorado_Texto_9 MSGBOX_AUTOCLOSE
release
end

RuinsOfAlph_S1_Combate_UnownDorado_Texto_1:
.string "...$"

RuinsOfAlph_S1_Combate_UnownDorado_Texto_2:
.string "... ... ... ...$"

RuinsOfAlph_S1_Combate_UnownDorado_Texto_3:
.string "(La energía misteriosa se ha\n"
	.string "esfumado).$"

RuinsOfAlph_S1_Combate_UnownDorado_Texto_4:
.string "ANDRA: ¿Ese era el UNOWN causante\n"
	.string "de todo?$"

RuinsOfAlph_S1_Combate_UnownDorado_Texto_5:
.string "ATLAS no responde. Me extraña que\n"
	.string "GIOVANNI lo haya dejado así, ha\l"
	.string "debido de ocurrir algo.$"

RuinsOfAlph_S1_Combate_UnownDorado_Texto_6:
.string "Vamos, {PLAYER}, debemos de seguir\n"
	.string "avanzando y confiar en que volverá\l"
	.string "a la normalidad cuando todo esto\l"
	.string "acabe, esta vez iremos juntos.$"

RuinsOfAlph_S1_Combate_UnownDorado_Texto_7:
.string "ANDRA: ¿C-cómo?$"

RuinsOfAlph_S1_Combate_UnownDorado_Texto_8:
.string "Ahora lo entiendo, {PLAYER}, UNOWN\n"
	.string "te pone a prueba de forma\l"
	.string "individual. Solo podemos pasar de\l"
	.string "uno en uno y para ello hay que\l"
	.string "derrotar a este UNOWN. GIOVANNI\l"
	.string "debió poder, ATLAS...$"

RuinsOfAlph_S1_Combate_UnownDorado_Texto_9:
.string "Sigue adelante, {PLAYER}, estaré\n"
	.string "bien. Para esto me he estado\l"
	.string "preparando, para enfrentar a\l"
	.string "deidades con POKÉMON mortales.\l"
	.string "¡Vamos, CROBAT!\l"
	.string "¡Demostremos a esta reliquia el\l"
	.string "poder del FUERTE VÍNCULO!$"

RuinsOfAlph_S1_Combate_UnownDorado_Move_1:
face_up
step_end

RuinsOfAlph_S1_Combate_UnownDorado_Move_2:
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
step_end

RuinsOfAlph_S1_Combate_UnownDorado_Move_3:
emote_exclamation_mark
face_right
step_end

RuinsOfAlph_S1_Combate_UnownDorado_Move_4:
emote_exclamation_mark
step_end

RuinsOfAlph_S1_Combate_UnownDorado_Move_5:
face_down
step_end

RuinsOfAlph_S1_Combate_UnownDorado_Move_6:
walk_slow_left
walk_slow_left
walk_slow_left
face_down
step_end

RuinsOfAlph_S1_Combate_UnownDorado_Move_7:
walk_slow_up
step_end

RuinsOfAlph_S1_Combate_UnownDorado_Move_8:
jump_down
face_up
step_end

RuinsOfAlph_S1_Combate_UnownDorado_Move_9:
walk_in_place_up
step_end
