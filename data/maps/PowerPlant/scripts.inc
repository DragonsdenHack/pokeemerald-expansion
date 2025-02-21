PowerPlant_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, PowerPlant_OnResume
	.byte 0

PowerPlant_OnResume:
	call PowerPlant_SetupEscapeWarp
	end

PowerPlant_SetupEscapeWarp::
	setescapewarp MAP_ROUTE10, 7, 41
	return

PowerPlant1::
end



PowerPlant2::
end



PowerPlant3::
end



PowerPlant4::
end



PowerPlant5::
end



PowerPlant6::
end



PowerPlant7::
end



PowerPlant8::
end



PowerPlant9::
end



PowerPlant10::
end



PowerPlant11::
end



PowerPlant13::
lock
msgbox PowerPlant13_Texto_1 MSGBOX_SIGN
release
end

PowerPlant13_Texto_1:
	.string "You are done, young lady; when LT.SURGE\n"
	.string "arrives, it won't take him more than one\l"
	.string "POKÉMON to finish you off…$"



PowerPlant14::
lock
msgbox PowerPlant14_Texto_1 MSGBOX_SIGN
release
end

PowerPlant14_Texto_1:
.string "{PLAYER}?\n"
	.string "Finally…\l"
	.string "I have already defeated 7 POLICE\l"
	.string "officers who fled to alert LT. SURGE…\l"
	.string "Hurry{PAUSE 15}…{PAUSE 15} My team won't last much longer…$"



PowerPlant15::
end



PowerPlant16::
lock
msgbox PowerPlant16_Texto_1 MSGBOX_SIGN
release
end

PowerPlant16_Texto_1:
.string "PETREL: Take care of ZAPDOS.\n"
	.string "Go!$"



PowerPlant17::
lock
msgbox PowerPlant17_Texto_1 MSGBOX_SIGN
release
end

PowerPlant17_Texto_1:
	.string "LORELEI: So you are GIOVANNI's right\n"
	.string "hand, I've been ordered by LANCE to use\l"
	.string "my full capacity to defeat you, no one\l"
	.string "will leave this place while I am here…$"



PowerPlant18::
lock
msgbox PowerPlant18_Texto_1 MSGBOX_SIGN
release
end

PowerPlant18_Texto_1:
	.string "ARCHER: I am not one of those mediocre\n"
	.string "TRAINERS that are pretty common\l"
	.string "around here, LORELEI, neither a GYM\l"
	.string "LEADER, you will have to do it better if\l"
	.string "you want to defeat me…$"



PowerPlant19::
end



PowerPlant21::
end



PowerPlant_EventScript_Policia::
	trainerbattle_single TRAINER_DAISY, PowerPlant_Text_PoliciaIntro, PowerPlant_Text_PoliciaDefeated
	msgbox PowerPlant_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



PowerPlant_EventScript_Policia2::
	trainerbattle_single TRAINER_ROSE_1, PowerPlant_Text_Policia2Intro, PowerPlant_Text_Policia2Defeated
	msgbox PowerPlant_Policia2PostBattle, MSGBOX_AUTOCLOSE
	end



PowerPlant_EventScript_Policia3::
	trainerbattle_single TRAINER_VIOLET, PowerPlant_Text_Policia3Intro, PowerPlant_Text_Policia3Defeated
	msgbox PowerPlant_Policia3PostBattle, MSGBOX_AUTOCLOSE
	end



PowerPlant_EventScript_Policia4::
	trainerbattle_single TRAINER_ROSE_2, PowerPlant_Text_Policia4Intro, PowerPlant_Text_Policia4Defeated
	msgbox PowerPlant_Policia4PostBattle, MSGBOX_AUTOCLOSE
	end



PowerPlant_EventScript_Policia5::
	trainerbattle_single TRAINER_ROSE_3, PowerPlant_Text_Policia5Intro, PowerPlant_Text_Policia5Defeated
	msgbox PowerPlant_Policia5PostBattle, MSGBOX_AUTOCLOSE
	end

PowerPlant_Encuentro_Petrel::
lock
applymovement OBJ_EVENT_ID_PLAYER, PowerPlant_Encuentro_Petrel_Move_1
waitmovement 0x0
playse SE_PIN
applymovement 19, PowerPlant_Encuentro_Petrel_Move_2
waitmovement 0x0
msgbox PowerPlant_Encuentro_Petrel_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 19, PowerPlant_Encuentro_Petrel_Move_2.1
waitmovement 0x0
delay 10
msgbox PowerPlant_Encuentro_Petrel_Texto_1.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 19, PowerPlant_Encuentro_Petrel_Move_3
waitmovement 0x0
msgbox PowerPlant_Encuentro_Petrel_Texto_2 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Encuentro_Petrel_Texto_2.1 MSGBOX_AUTOCLOSE
delay 20
msgbox PowerPlant_Encuentro_Petrel_Texto_3 MSGBOX_AUTOCLOSE
applymovement 19, PowerPlant_Encuentro_Petrel_Move_4
waitmovement 0x0
setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
removeobject 19
clearflag FLAG_HOENN_74
clearflag FLAG_HOENN_75
clearflag FLAG_HOENN_76
clearflag FLAG_HOENN_77
clearflag FLAG_HOENN_78
clearflag FLAG_HOENN_79
clearflag FLAG_HOENN_90
clearflag FLAG_HOENN_91
clearflag FLAG_HOENN_92
clearflag FLAG_HOENN_93
clearflag FLAG_HOENN_94
clearflag FLAG_HOENN_95
clearflag FLAG_HOENN_96
clearflag FLAG_HOENN_97
clearflag FLAG_HOENN_98
clearflag FLAG_HOENN_99
setflag FLAG_HOENN_640
setflag FLAG_HOENN_641
setflag FLAG_HOENN_642
setflag FLAG_HOENN_643
setflag FLAG_HOENN_644
setflag FLAG_HOENN_645
setflag FLAG_HOENN_646
setflag FLAG_HOENN_647
setflag FLAG_HOENN_648
setflag FLAG_HOENN_649
setvar VAR_UNUSED_0x40F7, 70
release
end

PowerPlant_Encuentro_Petrel_Move_2.1:
delay_8
face_up
delay_16
delay_8
face_player
delay_8
step_end

PowerPlant_Encuentro_Petrel_Texto_1:
.string "¡{PLAYER}!\n"
	.string "ATLAS y yo hemos tenido que entrar\l"
	.string "sin ti{PAUSE 25}…{PAUSE 25} vimos cómo LORELEI del\l"
	.string "ALTO MANDO llegaba a la CENTRAL,\l"
	.string "y tuvimos que intervenir{PAUSE 25}…{PAUSE 25}$"

PowerPlant_Encuentro_Petrel_Texto_1.1:
	.string "ATLAS ahora mismo está\n"
	.string "combatiendo con ella, me ha pedido\l"
	.string "que te encontrara y te contara el\l"
	.string "plan{PAUSE 25}…{PAUSE 5}$"

PowerPlant_Encuentro_Petrel_Texto_2:
	.string "Yo voy a quitarle de encima esos\n"
	.string "policías a ANDRA.\l"
	.string "Tú, mientras tanto, irás a por ZAPDOS\l"
	.string "para cumplir así con la misión.$"

PowerPlant_Encuentro_Petrel_Texto_2.1:
	.string "En cuanto obtengas la pluma del AVE, y\n"
	.string "nosotros acabemos con nuestros rivales,\l"
	.string "nos largamos de aquí antes de que la\l"
	.string "situación empeore, ¿entendido?$"

PowerPlant_Encuentro_Petrel_Texto_3:
.string "Perfecto, no tenemos\n"
	.string "tiempo que perder.$"

PowerPlant_Encuentro_Petrel_Move_1:
walk_in_place_right
step_end

PowerPlant_Encuentro_Petrel_Move_2:
emote_exclamation_mark
walk_left
walk_left
step_end

PowerPlant_Encuentro_Petrel_Move_3:
walk_in_place_right
face_left
step_end

PowerPlant_Encuentro_Petrel_Move_4:
walk_right
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

PowerPlant_Combate_Zapdos_Surge::
lock
compare VAR_UNUSED_0x40F7, 70
goto_if_gt SeafoamIslands_5F_Combate_Articuno_Derrotado
playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_1 MSGBOX_DEFAULT
waitmessage
waitmoncry
delay 10
playse MUS_RG_ENCOUNTER_GYM_LEADER
waitbuttonpress
trainerbattle_no_intro TRAINER_ZAPDOS, PowerPlant_Combate_Zapdos_Surge_Texto_2
playse MUS_RG_OBTAIN_KEY_ITEM
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_3 MSGBOX_DEFAULT
waitse
clearflag FLAG_HIDE_FANCLUB_OLD_LADY
addobject 11
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PowerPlant_Combate_Zapdos_Surge_Move_1
waitmovement 0x0
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_4 MSGBOX_AUTOCLOSE
applymovement 11, PowerPlant_Combate_Zapdos_Surge_Move_2
waitmovement 0x0
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_5 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_5.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 11, PowerPlant_Combate_Zapdos_Surge_Move_1.1
waitmovement 0x0
waitse
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_5.2 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_5.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 11, PowerPlant_Combate_Zapdos_Surge_Move_3
waitmovement 0x0
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_6 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_6.1 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_6.2 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 11, PowerPlant_Combate_Zapdos_Surge_Move_1.1
waitmovement 0x0
waitse
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_6.3 MSGBOX_AUTOCLOSE
delay 10
setflag FLAG_HIDE_FANCLUB_OLD_LADY
trainerbattle_no_intro TRAINER_SURGE_1, PowerPlant_Combate_Zapdos_Surge_Texto_7
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_8 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_8.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 11, PowerPlant_Combate_Zapdos_Surge_Move_1
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_9 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_9.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 11, PowerPlant_Combate_Zapdos_Surge_Move_6
applymovement 17, PowerPlant_Combate_Zapdos_Surge_Move_5
waitmovement 0x0
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_10 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_10.1 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_11 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_11.1 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_11.2 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 11, PowerPlant_Combate_Zapdos_Surge_Move_1
waitmovement 0x0
delay 10
applymovement 11, PowerPlant_Combate_Zapdos_Surge_Move_7
waitmovement 0x0
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_12 MSGBOX_AUTOCLOSE
applymovement 11, PowerPlant_Combate_Zapdos_Surge_Move_8
waitmovement 0x0
removeobject 11
playse SE_EXIT
delay 15
applymovement 17, PowerPlant_Combate_Zapdos_Surge_Move_9
waitmovement 0x0
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_13 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_13.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 17, PowerPlant_Combate_Zapdos_Surge_Move_10
waitmovement 0x0
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_14 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_14.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 17, PowerPlant_Combate_Zapdos_Surge_Move_11
waitmovement 0x0
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_15 MSGBOX_AUTOCLOSE
applymovement 17, PowerPlant_Combate_Zapdos_Surge_Move_4
waitmovement 0x0
delay 20
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_16 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_MAUVILLE_CITY_WALLY
fadescreen 1 
delay 20
removeobject 17
removeobject 16
removeobject 21
removeobject 14
removeobject 13
removeobject 12
removeobject 10
removeobject 15
removeobject 7
removeobject 6
removeobject 2
fadescreen 0
clearflag FLAG_NUEVA_839
setvar VAR_UNUSED_0x40F7, 71
release
end

PowerPlant_Combate_Zapdos_Surge_Move_1.1:
walk_in_place_down
step_end

PowerPlant_Combate_Zapdos_Surge_Texto_1:
.string "Zap!$"

PowerPlant_Combate_Zapdos_Surge_Texto_2:
.string "Zap…$"

PowerPlant_Combate_Zapdos_Surge_Texto_3:
	.string "You obtained a feather from the\n"
	.string "legendary ZAPDOS!$"

PowerPlant_Combate_Zapdos_Surge_Texto_4:
.string "????: YOU!?!$"

PowerPlant_Combate_Zapdos_Surge_Texto_5:
.string "LT.SURGE: ¡¿Cómo te atreves a dañar\n"
	.string "algo tan puro y sagrado?!$"

PowerPlant_Combate_Zapdos_Surge_Texto_5.1:
	.string "Yo mismo me he encargado de\n"
	.string "cuidar y darle un hogar dentro de\l"
	.string "esta CENTRAL sin uso a ese ZAPDOS.\l"
	.string "¡Para que ahora venga un mocoso sin\l"
	.string "escrúpulos a deshacer mi trabajo!$"

PowerPlant_Combate_Zapdos_Surge_Texto_5.2:
		.string "¡No tienes perdón!$"

PowerPlant_Combate_Zapdos_Surge_Texto_5.3:
	.string "¡A ti y a tus amigos os caerá la\n"
	.string "pena máxima después de este\l"
	.string "atentado contra el patrimonio\l"
	.string "cultural de nuestra región!$"

PowerPlant_Combate_Zapdos_Surge_Texto_6:
.string "Debí haberte detenido ese día, cuando\n"
	.string "te vi en CIUDAD CARMÍN por primera vez.$"

PowerPlant_Combate_Zapdos_Surge_Texto_6.1:
	.string "Ya apuntabas maneras de delincuente,\n"
	.string "pero no te preocupes, me aseguraré\l"
	.string "de que recibes un castigo ejemplar.$"

PowerPlant_Combate_Zapdos_Surge_Texto_6.2:
	.string "¿Sabes por qué LANCE me ha enviado\n"
	.string "a mí y no a otro LÍDER de GIMNASIO?$"

PowerPlant_Combate_Zapdos_Surge_Texto_6.3:
	.string "¡Porque yo sé lo que es\n"
	.string "ganar una guerra!$"

PowerPlant_Combate_Zapdos_Surge_Texto_7:
	.string "You're not just an ordinary ROCKET!$"

PowerPlant_Combate_Zapdos_Surge_Texto_8:
.string "Chico insolente{PAUSE 15}…{PAUSE 15}\n"
	.string "Verás cuando LANCE se entere de esto, ni\l"
	.string "tú ni tu organización tenéis la más\l"
	.string "mínima idea de las armas que posee{PAUSE 15}…{PAUSE 15}$"

PowerPlant_Combate_Zapdos_Surge_Texto_8.1:
	.string "Como sigáis con estas escaramuzas,\n"
	.string "va a poneros a todos de rodillas.$"

PowerPlant_Combate_Zapdos_Surge_Texto_9:
.string "????: Ya he oído bastante, SURGE.$"

PowerPlant_Combate_Zapdos_Surge_Texto_9.1:
	.string "Largo de aquí, antes de\n"
	.string "que cambie de opinión.$"

PowerPlant_Combate_Zapdos_Surge_Texto_10:
.string "Debería de darte vergüenza, no ser\n"
	.string "capaz con uno de los nuestros, incluso\l"
	.string "tras tener un encuentro legendario.$"

PowerPlant_Combate_Zapdos_Surge_Texto_10.1:
	.string "Los LÍDERES DE GIMNASIO estáis de capa\n"
	.string "caída; el acomodaros bajo el gobierno\l"
	.string "de LANCE parece que no ha sentado muy\l"
	.string "bien a vuestros POKÉMON.$"


PowerPlant_Combate_Zapdos_Surge_Texto_11:
.string "LT.SURGE: Tú debes de ser ATLAS{PAUSE 15}…{PAUSE 15}\n"
	.string "Sí{PAUSE 15}…{PAUSE 15} LANCE ya me advirtió de que\l"
	.string "podrías aparecer por aquí.$"

PowerPlant_Combate_Zapdos_Surge_Texto_11.1:
	.string "Debería darte vergüenza no apoyar\n"
	.string "a alguien de tu misma región.$"

PowerPlant_Combate_Zapdos_Surge_Texto_11.2:
	.string "ATLAS: Los actos de LANCE no representan\n"
	.string "a JOHTO, que te quede claro.$"

PowerPlant_Combate_Zapdos_Surge_Texto_12:
.string "LT.SURGE: ¡Qué más da!\n"
	.string "Disfrutad de vuestras últimas bocanadas\l"
	.string "de libertad, antes de que os apresen a\l"
	.string "todos, no podréis huir eternamente.$"

PowerPlant_Combate_Zapdos_Surge_Texto_13:
.string "ATLAS: Así que ZAPDOS y un LÍDER DE\n"
	.string "GIMNASIO al hilo, ¿eh, {PLAYER}?\l"
	.string "Parece que, después de todo, estuviste\l"
	.string "atento y asimilaste mi discurso de\l"
	.string "bienvenida.$"

PowerPlant_Combate_Zapdos_Surge_Texto_13.1:
	.string "Sin duda, has superado cualquier\n"
	.string "expectativa que podría tenerse sobre\l"
	.string "tu nivel, y demostrado una gran\l"
	.string "lealtad al TEAM ROCKET hoy, aquí.$"

PowerPlant_Combate_Zapdos_Surge_Texto_14:
.string "ANDRA ha vuelto a la BASE de AZULONA,\n"
	.string "y PETREL a la de RUTA 5.\l"
	.string "Después de todo lo ocurrido aquí,\l"
	.string "GIOVANNI querrá hacer balance de\l"
	.string "inmediato.$"

PowerPlant_Combate_Zapdos_Surge_Texto_14.1:
	.string "Deberías presentarte en su despacho\n"
	.string "cuanto antes; después de derrotar a dos\l"
	.string "legendarios y cumplir no solo tu\l"
	.string "misión, sino esta también, no\l"
	.string "quiero imaginarme cómo te recibirá\l"
	.string "nuestro LÍDER{PAUSE 5}…{PAUSE 5}$"

PowerPlant_Combate_Zapdos_Surge_Texto_15:
.string "Este lugar no tardará en llenarse\n"
	.string "de policías otra vez.$"

PowerPlant_Combate_Zapdos_Surge_Texto_16:
.string "Debemos irnos, hoy{PAUSE 15}…{PAUSE 15} hemos\n"
	.string "dado un gran paso para recuperar KANTO.$"

PowerPlant_Combate_Zapdos_Surge_Texto_17:
.string "-Parece que no le quedan fuerzas\n"
	.string "para combatir.-$"

PowerPlant_Combate_Zapdos_Surge_Move_1:
emote_exclamation_mark
walk_in_place_up
step_end

PowerPlant_Combate_Zapdos_Surge_Move_2:
walk_down
walk_down
walk_down
walk_down
step_end

PowerPlant_Combate_Zapdos_Surge_Move_3:
walk_down
step_end

PowerPlant_Combate_Zapdos_Surge_Move_4:
face_up
step_end

PowerPlant_Combate_Zapdos_Surge_Move_5:
walk_fast_down
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_in_place_left
step_end

PowerPlant_Combate_Zapdos_Surge_Move_6:
delay_16
delay_16
delay_16
delay_16
delay_16
delay_16
face_right
step_end

PowerPlant_Combate_Zapdos_Surge_Move_7:
walk_in_place_down
delay_16
walk_in_place_right
step_end

PowerPlant_Combate_Zapdos_Surge_Move_8:
walk_left
walk_down
walk_left
walk_left
step_end

PowerPlant_Combate_Zapdos_Surge_Move_9:
face_down
step_end

PowerPlant_Combate_Zapdos_Surge_Move_10:
face_left
step_end

PowerPlant_Combate_Zapdos_Surge_Move_11:
face_down
step_end
