RockTunnel_2F_MapScripts::
	.byte 0

RockTunnel2F_2::
end



RockTunnel2F_3::
end



RockTunnel2F_4::
end



RockTunnel2F_5::
end



RockTunnel2F_6::
end



RockTunnel2F_7::
end



RockTunnel2F_8::
end



RockTunnel2F_9::
end



RockTunnel2F_10::
end



RockTunnel2F_11::
end



RockTunnel2F_12::
end



RockTunnel2F_15::
end



RockTunnel2F_22::
lock     
faceplayer     
msgbox RockTunnel2F_Text_22, MSGBOX_DEFAULT
release     
end

RockTunnel2F_Text_22:
.string "ARBOK, PERSIAN, TAUROS o SANDSLASH\n"
.string "son POKÉMON muy preciados por los\l"
.string "DOMADORES como yo, pero no hay\l"
.string "ninguno como KANGASKHAN, ¿tienes\l"
.string "idea del éxito en el que mis\l"
.string "espectáculos se convertirían con\l"
.string "ese POKÉMON a las órdenes de mi\l"
.string "látigo?$"



RockTunnel2F_28::
lock     
faceplayer     
msgbox RockTunnel2F_Text_28, MSGBOX_DEFAULT
release     
end

RockTunnel2F_Text_28:
.string "¿Te imaginas un CAZABICHOS con un\n"
.string "KANGASKHAN en su equipo?\l"
.string "¡Se acabarían todos los prejuicios\l"
.string "que nos señalan como unos\l"
.string "debiluchos!$"



RockTunnel2F_EventScript_Necio::
	trainerbattle_single TRAINER_RODNEY, RockTunnel2F_Text_NecioIntro, RockTunnel2F_Text_NecioDefeated
	msgbox RockTunnel2F_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Hiker::
	trainerbattle_single TRAINER_ATSUSHI, RockTunnel2F_Text_HikerIntro, RockTunnel2F_Text_HikerDefeated
	msgbox RockTunnel2F_Text_HikerPostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Chica::
	trainerbattle_single TRAINER_SPENCER, RockTunnel2F_Text_ChicaIntro, RockTunnel2F_Text_ChicaDefeated
	msgbox RockTunnel2F_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Chica2::
	trainerbattle_single TRAINER_ROLAND, RockTunnel2F_Text_Chica2Intro, RockTunnel2F_Text_Chica2Defeated
	msgbox RockTunnel2F_Text_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Necio2::
	trainerbattle_single TRAINER_RICHARD, RockTunnel2F_Text_Necio2Intro, RockTunnel2F_Text_Necio2Defeated
	msgbox RockTunnel2F_Text_Necio2PostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Necio3::
	trainerbattle_single TRAINER_HERMAN, RockTunnel2F_Text_Necio3Intro, RockTunnel2F_Text_Necio3Defeated
	msgbox RockTunnel2F_Text_Necio3PostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Hiker2::
	trainerbattle_single TRAINER_KIRK, RockTunnel2F_Text_Hiker2Intro, RockTunnel2F_Text_Hiker2Defeated
	msgbox RockTunnel2F_Text_Hiker2PostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Hiker3::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_7, RockTunnel2F_Text_Hiker3Intro, RockTunnel2F_Text_Hiker3Defeated
	msgbox RockTunnel2F_Text_Hiker3PostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_2F_Combate_Miguel::
msgbox RockTunnel_2F_Combate_Miguel_Texto_1 MSGBOX_AUTOCLOSE
msgbox RockTunnel_2F_Combate_Miguel_Texto_2 MSGBOX_AUTOCLOSE
msgbox RockTunnel_2F_Combate_Miguel_Texto_3 MSGBOX_AUTOCLOSE
msgbox RockTunnel_2F_Combate_Miguel_Texto_4 MSGBOX_AUTOCLOSE
msgbox RockTunnel_2F_Combate_Miguel_Texto_5 MSGBOX_AUTOCLOSE
msgbox RockTunnel_2F_Combate_Miguel_Texto_6 MSGBOX_AUTOCLOSE
msgbox RockTunnel_2F_Combate_Miguel_Texto_7 MSGBOX_AUTOCLOSE
msgbox RockTunnel_2F_Combate_Miguel_Texto_8 MSGBOX_AUTOCLOSE
msgbox RockTunnel_2F_Combate_Miguel_Texto_9 MSGBOX_AUTOCLOSE
msgbox RockTunnel_2F_Combate_Miguel_Texto_10 MSGBOX_AUTOCLOSE
msgbox RockTunnel_2F_Combate_Miguel_Texto_11 MSGBOX_AUTOCLOSE
msgbox RockTunnel_2F_Combate_Miguel_Texto_12 MSGBOX_AUTOCLOSE
msgbox RockTunnel_2F_Combate_Miguel_Texto_13 MSGBOX_AUTOCLOSE
msgbox RockTunnel_2F_Combate_Miguel_Texto_14 MSGBOX_AUTOCLOSE
msgbox RockTunnel_2F_Combate_Miguel_Texto_15 MSGBOX_AUTOCLOSE
msgbox RockTunnel_2F_Combate_Miguel_Texto_16 MSGBOX_AUTOCLOSE
msgbox RockTunnel_2F_Combate_Miguel_Texto_17 MSGBOX_AUTOCLOSE
release
end

RockTunnel_2F_Combate_Miguel_Texto_1:
.string "????: ¡Al fin!\n"
	.string "¡De modo que los rumores eran\l"
	.string "ciertos!\l"
	.string "¡Tengo al POKÉMON MATERNAL delante\l"
	.string "mis narices, a un solo movimiento\l"
	.string "de apropiármelo!$"

RockTunnel_2F_Combate_Miguel_Texto_2:
.string "¡Perfecto!¡Con este POKÉMON mi\n"
	.string "colección de raros y fuertes\l"
	.string "POKÉMON está casi completa!$"

RockTunnel_2F_Combate_Miguel_Texto_3:
.string "¿Se te ha perdido algo?\n"
	.string "Mala suerte ROCKET, yo lo he visto\l"
	.string "primero, así que este KANGASKHAN\l"
	.string "pertence ya a mi equipo POKÉMON,\l"
	.string "si me discul...$"

RockTunnel_2F_Combate_Miguel_Texto_4:
.string "¡Un momento!\n"
	.string "¡Tú eres ese ROCKET con el que\l"
	.string "hice la apuesta de los FÓSILES en\l"
	.string "el MT.MOON!$"

RockTunnel_2F_Combate_Miguel_Texto_5:
.string "He de admitir que tuviste mala\n"
	.string "fortuna, y yo mucha...$"

RockTunnel_2F_Combate_Miguel_Texto_6:
.string "Ese necio podrá ser todo lo fuerte\n"
	.string "que quiera, pero es un negado en\l"
	.string "el trato social, aceptaría sin\l"
	.string "negarlo cualquier limite o trato\l"
	.string "que le propusieras a pesar de\l"
	.string "contar con el poder de sus\l"
	.string "POKÉMON, por suerte bastaron un\l"
	.string "par de palabras alegando mi\l"
	.string "propiedad de esos dos FÓSILES, y\l"
	.string "soltarle algún que otro dato útil\l"
	.string "como dónde revivir esos FÓSILES\l"
	.string "para convencerlo de compartirlos\l"
	.string "conmigo, cuando pudo perfectamente\l"
	.string "quedarse con los dos, ¡Jah!$"

RockTunnel_2F_Combate_Miguel_Texto_7:
.string "Definitivamente estás gafado\n"
	.string "RECLUTA, pierdes tu oportunidad en\l"
	.string "el MT.MOON en el último momento, y\l"
	.string "ahora presencias como atrapo al\l"
	.string "preciado KANGASKHAN delante de tus\l"
	.string "narices.$"

RockTunnel_2F_Combate_Miguel_Texto_8:
.string "¿Cómo?\n"
	.string "¿Nadie va a ir a ningún lado y ese\l"
	.string "KANGASKHAN se queda contigo?$"

RockTunnel_2F_Combate_Miguel_Texto_9:
.string "Pobre iluso, crees que soy el\n"
	.string "mismo de ese entonces, para tu\l"
	.string "información he estado entrenando\l"
	.string "en los despachos secretos de la\l"
	.string "todopoderosa SILPH, donde han\l"
	.string "optimizado el potencial de mis\l"
	.string "POKÉMON, todos los ENTRENADORES de\l"
	.string "los alrededores son como hormigas\l"
	.string "al lado mía, qué desafortunado,\l"
	.string "nunca se te ha dado ROCKET.\l"
	.string "¡Nunca estuviste ni en el momento,\l"
	.string "ni en el lugar ni en las\l"
	.string "circunstancias propicias!$"

RockTunnel_2F_Combate_Miguel_Texto_10:
.string "¡Pero qué clase de tomadura de\n"
	.string "pelo es esta!$"

RockTunnel_2F_Combate_Miguel_Texto_11:
.string "¡En SILPH me dijeron que con la\n"
	.string "última actualización el nivel de\l"
	.string "mi equipo podría tumbar hasta a un\l"
	.string "LÍDER DE GIMNASIO!\l"
	.string "¡Me han estafado!$"

RockTunnel_2F_Combate_Miguel_Texto_12:
.string "????: Y lo dice aquél que ha\n"
	.string "construido su actual equipo a base\l"
	.string "de estafar a la gente.$"

RockTunnel_2F_Combate_Miguel_Texto_13:
.string "PROTÓN: Excelente trabajo {PLAYER},\n"
	.string "acabas de desarmar a un peligroso\l"
	.string "entrenador junto con el\l"
	.string "KANGASKHAN, me aseguraré de\l"
	.string "ponerlo en su lugar antes de que\l"
	.string "escape usando la CUERDA HUIDA,\l"
	.string "este canalla se las sabe todas.$"

RockTunnel_2F_Combate_Miguel_Texto_14:
.string "(PROTÓN LE QUITÓ TODOS LOS POKÉMON\n"
	.string "A CIENTÍFICO MIGUEL).$"

RockTunnel_2F_Combate_Miguel_Texto_15:
.string "CIENTÍFICO: Grrrrrrrr...$"

RockTunnel_2F_Combate_Miguel_Texto_16:
.string "PROTÓN: De modo que el rumor era\n"
	.string "cierto, quién diría que en esta\l"
	.string "cueva pudiera habitar un\l"
	.string "KANGASKHAN...\l"
	.string "En fin, vuelvo al cuartel\l"
	.string "inmediatamente {PLAYER}, la\l"
	.string "importancia de lo que llevo\l"
	.string "conmigo así lo exije, tú también\l"
	.string "deberías de regresar cuanto antes,\l"
	.string "GIOVANNI estará esperándote\l"
	.string "encantado de recompensarte y\l"
	.string "preguntarte por los detalles de la\l"
	.string "misión.\l"
	.string "¡Salve GIOVANNI!$"

RockTunnel_2F_Combate_Miguel_Texto_17:
.string "CIENTÍFICO: No tienes perdón, he\n"
	.string "perdido en cuestión de segundos el\l"
	.string "equipo que me llevó años\l"
	.string "construir.\l"
	.string "¡Recuerda mis palabras {PLAYER}!\l"
	.string "¡No descansaré hasta verte caer!$"

RockTunnel_2F_Combate_Miguel_Move_1:
face_left
step_end

RockTunnel_2F_Combate_Miguel_Move_2:
emote_exclamation_mark
step_end

RockTunnel_2F_Combate_Miguel_Move_3:
walk_in_place_up
face_left
step_end

RockTunnel_2F_Combate_Miguel_Move_4:
face_right
step_end

RockTunnel_2F_Combate_Miguel_Move_5:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_right
step_end

RockTunnel_2F_Combate_Miguel_Move_6:
walk_in_place_down
step_end

RockTunnel_2F_Combate_Miguel_Move_7:
walk_in_place_up
step_end

RockTunnel_2F_Combate_Miguel_Move_8:
walk_right
walk_right
walk_down
face_right
step_end

RockTunnel_2F_Combate_Miguel_Move_9:
walk_left
walk_up
walk_left
face_down
step_end

RockTunnel_2F_Combate_Miguel_Move_10:
face_up
step_end

RockTunnel_2F_Combate_Miguel_Move_11:
walk_left
walk_left
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RockTunnel_2F_Combate_Miguel_Move_12:
walk_left
walk_left
step_end
