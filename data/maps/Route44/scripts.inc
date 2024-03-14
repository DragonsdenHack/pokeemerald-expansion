Route44_MapScripts::
	.byte 0

Route44_1::
lock     
faceplayer     
msgbox Route44_Text_1, MSGBOX_DEFAULT
release     
end

Route44_Text_1:
	.string "The ICE PATH is closed until further\n"
	.string "notice, sorry, it's been last-minute\l"
	.string "orders from ECRUTEAK CITY.$"



Route44_2::
end



Route44_4::
end



Route44_5::
end



Route44_6::
lock     
faceplayer     
msgbox Route44_Text_6, MSGBOX_DEFAULT
release     
end

Route44_Text_6:
	.string "The ICE CAVE has kept the DRAGON TYPE\n"
	.string "sanctuary, BLACKTHORN CITY, secluded\l"
	.string "from the rest of JOHTO.$"



Route44_7::
end



Route44_8::
end



Route44_9::
end



Route44_10::
end



Route44_11::
end



Route44_EventScript_Domador::
	trainerbattle_single TRAINER_NICOLAS_5, Route44_Text_DomadorIntro, Route44_Text_DomadorDefeated
	msgbox Route44_Text_DomadorPostBattle, MSGBOX_AUTOCLOSE
	end



Route44_EventScript_Guay::
	trainerbattle_single TRAINER_PERRY, Route44_Text_GuayIntro, Route44_Text_GuayDefeated
	msgbox Route44_Text_GuayPostBattle, MSGBOX_AUTOCLOSE
	end



Route44_EventScript_Pescador::
	trainerbattle_single TRAINER_PHIL, Route44_Text_PescadorIntro, Route44_Text_PescadorDefeated
	msgbox Route44_Text_PescadorPostBattle, MSGBOX_AUTOCLOSE
	end



Route44_EventScript_Necio::
	trainerbattle_single TRAINER_HUGH, Route44_Text_NecioIntro, Route44_Text_NecioDefeated
	msgbox Route44_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



Route44_EventScript_Ornitologo::
	trainerbattle_single TRAINER_ROBERT_1, Route44_Text_OrnitologoIntro, Route44_Text_OrnitologoDefeated
	msgbox Route44_Text_OrnitologoPostBattle, MSGBOX_AUTOCLOSE
	end



Route44Documento_100::
msgbox Route44Documento_Text_100, MSGBOX_SIGN   
end

Route44Documento_Text_100:
	.string "ROUTE 44\n"
	.string "MAHOGANY TOWN - BLACKTHORN CITY$"



Route44Documento_101::
msgbox Route44Documento_Text_101, MSGBOX_SIGN   
end

Route44Documento_Text_101:
	.string "ROUTE 44\n"
	.string "ICE PATH AHEAD$"

Route44_Combate_Mirto::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Route44_Combate_Mirto_Move_1
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_1 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
addobject 3
applymovement 3, Route44_Combate_Mirto_Move_2
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_2 MSGBOX_AUTOCLOSE
applymovement 3, Route44_Combate_Mirto_Move_3
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_3 MSGBOX_AUTOCLOSE
applymovement 3, Route44_Combate_Mirto_Move_4
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_4 MSGBOX_AUTOCLOSE
applymovement 3, Route44_Combate_Mirto_Move_3
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox Route44_Combate_Mirto_Texto_5.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Route44_Combate_Mirto_Move_3.1
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_5.2 MSGBOX_AUTOCLOSE
applymovement 3, Route44_Combate_Mirto_Move_3
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_5.3 MSGBOX_AUTOCLOSE
applymovement 3, Route44_Combate_Mirto_Move_5
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_5.4 MSGBOX_AUTOCLOSE
applymovement 3, Route44_Combate_Mirto_Move_6
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_5.5 MSGBOX_AUTOCLOSE
applymovement 3, Route44_Combate_Mirto_Move_6.1
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_5.6 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, Route44_Combate_Mirto_Move_3.1
waitmovement 0x0
delay 10
msgbox Route44_Combate_Mirto_Texto_5.7 MSGBOX_AUTOCLOSE
delay 15
msgbox Route44_Combate_Mirto_Texto_5.8 MSGBOX_AUTOCLOSE
applymovement 3, Route44_Combate_Mirto_Move_6.2
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_5.9 MSGBOX_AUTOCLOSE
applymovement 3, Route44_Combate_Mirto_Move_6.3
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_5.10 MSGBOX_AUTOCLOSE
msgbox Route44_Combate_Mirto_Texto_6 MSGBOX_AUTOCLOSE
applymovement 3, Route44_Combate_Mirto_Move_3
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_7 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
trainerbattle_no_intro TRAINER_MIRTO, Route44_Combate_Mirto_Texto_8
applymovement OBJ_EVENT_ID_PLAYER, Route44_Combate_Mirto_Move_5
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_9 MSGBOX_AUTOCLOSE
msgbox Route44_Combate_Mirto_Texto_10 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox Route44_Combate_Mirto_Texto_11 MSGBOX_DEFAULT
givemon SPECIES_NOIBAT, 25, ITEM_NOIVERNITA
waitfanfare
msgbox Route44_Combate_Mirto_Texto_11.1 MSGBOX_DEFAULT
delay 10
applymovement 3, Route44_Combate_Mirto_Move_3
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_12 MSGBOX_AUTOCLOSE
fadescreen 1
playmoncry SPECIES_NOIVERN, CRY_MODE_ENCOUNTER
waitmoncry
removeobject 3
setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
playse SE_M_FLY
delay 15
fadescreen 0
setvar VAR_UNUSED_0x40F7, 166
release
end

Route44_Combate_Mirto_Move_6.3:
delay_8
walk_right
delay_8
step_end

Route44_Combate_Mirto_Move_6.2:
delay_8
face_right
delay_8
step_end

Route44_Combate_Mirto_Move_6.1:
delay_8
walk_in_place_left
delay_8
step_end

Route44_Combate_Mirto_Move_3.1:
face_up
delay_8
step_end

Route44_Combate_Mirto_Texto_1:
.string "????: {PLAYER}!\n"
	.string "Wait!$"

Route44_Combate_Mirto_Texto_2:
	.string "I figured I'd find you here. You've\n"
	.string "taken down 7 of the top 8 TRAINERS in\l"
	.string "JOHTO, haven't you? You're only left\l"
	.string "with the last and toughest one: the\l"
	.string "DRAGON MASTER of BLACKTHORN. That's\l"
	.string "why you're heading towards the ICE\l"
	.string "PATH.$"

Route44_Combate_Mirto_Texto_3:
	.string "I come to say goodbye, {PLAYER}.\n"
	.string "Indeed, soon I will go back to UNOVA, my\l"
	.string "original region.$"

Route44_Combate_Mirto_Texto_4:
	.string "I want my POKÉMON to see the region\n"
	.string "where it grew up one last time.$"

Route44_Combate_Mirto_Texto_5:
	.string "All my attempts to restore my POKÉMON's\n"
	.string "health have failed, but this journey\l"
	.string "has not been in vain. I have learned a\l"
	.string "lot from the best masters of JOHTO.\l"
	.string "They have made me realize that my\l"
	.string "POKÉMON's situation is privileged; it\l"
	.string "has a gift for combat, and it would be a\l"
	.string "sin not to explore the limits of such a\l"
	.string "unique POKÉMON.$"

Route44_Combate_Mirto_Texto_5.1:
	.string "…$"

Route44_Combate_Mirto_Texto_5.2:
	.string "El CAMPEÓN de una región es el\n"
	.string "entrenador más fuerte de esta, sabes lo\l"
	.string "que quiero decir, ¿no?$"

Route44_Combate_Mirto_Texto_5.3:
	.string "Representamos también el límite a lo\n"
	.string "que un ENTRENADOR ha podido llegar, lo\l"
	.string "más cercano a fuerzas mayores que solo\l"
	.string "los LEGENDARIOS más antiguos alcanzan.$"

Route44_Combate_Mirto_Texto_5.4:
	.string "Esto sin embargo lo logramos gracias a\n"
	.string "nuestro esfuerzo, desarrollo e\l"
	.string "interacciones que mantenemos con\l"
	.string "otros POKÉMON, mortales como nosotros,\l"
	.string "durante toda una vida.$"

Route44_Combate_Mirto_Texto_5.5:
	.string "No me cabe duda, ese tipo de actos dejan\n"
	.string "huella. Su potencial es ilimitado,\l"
	.string "sagrado.$"

Route44_Combate_Mirto_Texto_5.6:
	.string "En cambio, los dioses del MUNDO\n"
	.string "POKÉMON… ¿Sabes lo que creo?$"

Route44_Combate_Mirto_Texto_5.7:
	.string "Nos envidian, {PLAYER}.$"

Route44_Combate_Mirto_Texto_5.8:
	.string "Jamás sabrán lo que es empezar desde 0\n"
	.string "e ir subiendo poco a poco, escalar\l"
	.string "peldaños, pasar dificultades y aprender\l"
	.string "de las derrotas.$"

Route44_Combate_Mirto_Texto_5.9:
	.string "Nos envidian porque, a fin de cuentas,\n"
	.string "somos mortales. Cada combate nuestro\l"
	.string "podría ser el último. Jamás volveremos a\l"
	.string "tener esta conversación, ni a estar\l"
	.string "aquí, {PLAYER}.$"

Route44_Combate_Mirto_Texto_5.10:
	.string "¿Te das cuenta? Es en lo efímero\n"
	.string "de nuestra existencia donde reside\l"
	.string "su valor.$"

Route44_Combate_Mirto_Texto_6:
	.string "That's why I've come here, {PLAYER}. I\n"
	.string "can't think of a better way to honor my\l"
	.string "POKÉMON than to provide this battle,\l"
	.string "even as its light shines brightly, so\l"
	.string "that everyone remembers how it was at\l"
	.string "his prime.$"

Route44_Combate_Mirto_Texto_7:
	.string "No matter if it's 5 or 50 years from now,\n"
	.string "nothing can rob us of what we've lived\l"
	.string "through today, nor the LEGENDARY\l"
	.string "status we've achieved!$"

Route44_Combate_Mirto_Texto_8:
.string "I will never forget this battle.$"

Route44_Combate_Mirto_Texto_9:
	.string "You're a legendary trainer, {PLAYER}.\n"
	.string "I reckon this battle will mark the end\l"
	.string "of a chapter on my journey.$"

Route44_Combate_Mirto_Texto_10:
	.string "I'll release my current team and begin\n"
	.string "anew with the LARVESTA egg from my\l"
	.string "VOLCARONA. I want you to keep this\l"
	.string "POKÉMON.$"

Route44_Combate_Mirto_Texto_11:
.string "YOU OBTAINED A LV.25 NOIBAT!!$"

Route44_Combate_Mirto_Texto_11.1:
	.string "Con este combate, mi cénit como\n"
	.string "ENTRENADOR ha concluído. Pero tú… tú\l"
	.string "aún puedes hacer sangrar a los dioses.$"

Route44_Combate_Mirto_Texto_12:
	.string "Goodbye, {PLAYER}. Give my regards to\n"
	.string "the DRAGON MASTER; I'm sure he can\l"
	.string "guide you to even greater heights.$"

Route44_Combate_Mirto_Move_1:
emote_exclamation_mark
walk_in_place_left
step_end

Route44_Combate_Mirto_Move_2:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_up
walk_right
walk_right
step_end

Route44_Combate_Mirto_Move_3:
walk_in_place_right
step_end

Route44_Combate_Mirto_Move_4:
face_down
step_end

Route44_Combate_Mirto_Move_5:
face_left
step_end

Route44_Combate_Mirto_Move_6:
walk_slow_left
step_end
