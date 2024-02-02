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
.string "Ya estás al límite chiquilla,\n"
	.string "cuando el LT.SURGE llegue no le\l"
	.string "tomará más de un POKÉMON\l"
	.string "rematarte...$"



PowerPlant14::
lock
msgbox PowerPlant14_Texto_1 MSGBOX_SIGN
release
end

PowerPlant14_Texto_1:
.string "¿{PLAYER}?\n"
	.string "Al fin...\l"
	.string "Ya he derrotado a 7 POLICÍAS que\l"
	.string "han huido para avisar al LT.SURGE...\l"
	.string "Date prisa...\l"
	.string "Mi equipo no aguantará mucho más...$"



PowerPlant15::
end



PowerPlant16::
lock
msgbox PowerPlant16_Texto_1 MSGBOX_SIGN
release
end

PowerPlant16_Texto_1:
.string "PETREL: Ocúpate de ZAPDOS {PLAYER},\n"
	.string "¡rápido!$"



PowerPlant17::
lock
msgbox PowerPlant17_Texto_1 MSGBOX_SIGN
release
end

PowerPlant17_Texto_1:
.string "LORELEI: Entonces tú eres la mano\n"
	.string "derecha de GIOVANNI, tengo órdenes\l"
	.string "de LANCE de usar el 100% de mi\l"
	.string "capacidad en derrotarte, nadie\l"
	.string "saldrá de aquí sin mi\l"
	.string "consentimiento...$"



PowerPlant18::
lock
msgbox PowerPlant18_Texto_1 MSGBOX_SIGN
release
end

PowerPlant18_Texto_1:
.string "ATLAS: No soy uno de esos\n"
	.string "mediocres ENTRENADORES que abundan\l"
	.string "por aquí LORELEI, tampoco un LÍDER\l"
	.string "DE GIMNASIO, vas a tener que\l"
	.string "hacerlo mejor si quieres batirme...$"



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
applymovement 19, PowerPlant_Encuentro_Petrel_Move_3
waitmovement 0x0
msgbox PowerPlant_Encuentro_Petrel_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox PowerPlant_Encuentro_Petrel_Texto_3 MSGBOX_AUTOCLOSE
applymovement 19, PowerPlant_Encuentro_Petrel_Move_4
waitmovement 0x0
setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
removeobject 19
setvar VAR_UNUSED_0x40F7, 70
release
end

PowerPlant_Encuentro_Petrel_Texto_1:
.string "PETREL: ¡{PLAYER}!\n"
	.string "¿Dónde estabas?\l"
	.string "ATLAS y yo hemos tenido que entrar\l"
	.string "sin ti...vimos como LORELEI del\l"
	.string "ALTO MANDO llegaba a la CENTRAL\l"
	.string "para detener a ANDRA y tuvimos que\l"
	.string "intervenir...ATLAS ahora mismo está\l"
	.string "combatiendo con ella, me ha pedido\l"
	.string "que te encontrara y te contara el\l"
	.string "plan...$"

PowerPlant_Encuentro_Petrel_Texto_2:
.string "PETREL: ATLAS ahora mismo está\n"
	.string "lidiando con LORELEI, y yo voy a\l"
	.string "quitarle de encima esos\l"
	.string "policías a ANDRA, tú mientras\l"
	.string "tanto irás a por ZAPDOS para\l"
	.string "cumplir así con la misión, en\l"
	.string "cuanto obtengas lo que\l"
	.string "necesitamos y nosotros acabemos\l"
	.string "con nuestros rivales, nos largamos\l"
	.string "de aquí antes de que la situación\l"
	.string "empeore, ¿entendido?$"

PowerPlant_Encuentro_Petrel_Texto_3:
.string "PETREL: Perfecto, no tenemos\n"
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
waitmoncry
playse MUS_RG_ENCOUNTER_GYM_LEADER
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
applymovement 11, PowerPlant_Combate_Zapdos_Surge_Move_3
waitmovement 0x0
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_6 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_FANCLUB_OLD_LADY
trainerbattle_no_intro TRAINER_SURGE_1, PowerPlant_Combate_Zapdos_Surge_Texto_7
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_8 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 11, PowerPlant_Combate_Zapdos_Surge_Move_1
waitmovement 0x0
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_9 MSGBOX_AUTOCLOSE
applymovement 17, PowerPlant_Combate_Zapdos_Surge_Move_5
waitmovement 0x0
applymovement 11, PowerPlant_Combate_Zapdos_Surge_Move_6
waitmovement 0x0
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_10 MSGBOX_AUTOCLOSE
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_11 MSGBOX_AUTOCLOSE
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
applymovement 17, PowerPlant_Combate_Zapdos_Surge_Move_10
waitmovement 0x0
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_14 MSGBOX_AUTOCLOSE
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

PowerPlant_Combate_Zapdos_Surge_Texto_1:
.string "¡Zap!$"

PowerPlant_Combate_Zapdos_Surge_Texto_2:
.string "Zap...$"

PowerPlant_Combate_Zapdos_Surge_Texto_3:
.string "¡Obtuviste una pluma del\n"
	.string "LEGENDARIO ZAPDOS!$"

PowerPlant_Combate_Zapdos_Surge_Texto_4:
.string "????: ¡¡TÚ!!$"

PowerPlant_Combate_Zapdos_Surge_Texto_5:
.string "LT.SURGE: ¡Cómo te atreves a dañar\n"
	.string "algo tan puro y sagrado como una\l"
	.string "de nuestras 3 AVES LEGENDARIAS,\l"
	.string "patrimonio de la región de KANTO!\l"
	.string "¡Yo mismo me he encargado de\l"
	.string "cuidar y darle un hogar dentro de\l"
	.string "esta CENTRAL sin uso a ese ZAPDOS!\l"
	.string "¡Para que ahora venga un mocoso\l"
	.string "sin escrúpulos a deshacer mi\l"
	.string "trabajo!\l"
	.string "¡A ti y tus amigos os caerá la\l"
	.string "pena máxima después de este\l"
	.string "atentado contra el patrimonio\l"
	.string "cultural de nuestra región!$"

PowerPlant_Combate_Zapdos_Surge_Texto_6:
.string "LT.SURGE: Tuve que haberte\n"
	.string "detenido directamente ese día que\l"
	.string "pasaste por CARMÍN, ya ahí\l"
	.string "apuntabas maneras de delincuente,\l"
	.string "pero no te preocupes, tus POKÉMON\l"
	.string "no podrán responder a mis fieles\l"
	.string "eléctricos después de tu paliza\l"
	.string "con ZAPDOS, ¿sabes por qué LANCE\l"
	.string "me ha enviado a mi y no a otro\l"
	.string "LÍDER?\l"
	.string "¡Porque yo sé lo que es ganar una\l"
	.string "guerra!$"

PowerPlant_Combate_Zapdos_Surge_Texto_7:
.string "¡Tú no eres un ROCKET corriente!$"

PowerPlant_Combate_Zapdos_Surge_Texto_8:
.string "LT.SURGE: Chico insolente, verás\n"
	.string "cuando LANCE se entere de esto, ni\l"
	.string "tú ni tu organización tenéis la\l"
	.string "más mínima idea de las armas que\l"
	.string "posee, como sigáis con estas\l"
	.string "escaramuzas va a poneros a todos\l"
	.string "de rodillas.$"

PowerPlant_Combate_Zapdos_Surge_Texto_9:
.string "????: Ya he oído bastante SURGE,\n"
	.string "largo de aquí antes de que cambie\l"
	.string "de opinión.$"

PowerPlant_Combate_Zapdos_Surge_Texto_10:
.string "ATLAS: Debería de darte vergüenza\n"
	.string "no ser capaz con uno de los\l"
	.string "nuestros siquiera después de\l"
	.string "tener un encuentro legendario, los\l"
	.string "LÍDERES DE GIMNASIO estáis de capa\l"
	.string "caída, el acomodaros bajo el\l"
	.string "gobierno de LANCE parece que no ha\l"
	.string "sentado muy bien a vuestros\l"
	.string "POKÉMON.$"

PowerPlant_Combate_Zapdos_Surge_Texto_11:
.string "LT.SURGE: Tú debes de ser ATLAS,\n"
	.string "si, LANCE ya me advirtió de que\l"
	.string "pudieras aparecer por aquí,\l"
	.string "debería darte vergüenza no apoyar\l"
	.string "a alguien de tu misma región.$"

PowerPlant_Combate_Zapdos_Surge_Texto_12:
.string "LT.SURGE: Disfrutad de vuestras\n"
	.string "últimas bocanadas de libertad\l"
	.string "antes de que os apresen a todos,\l"
	.string "no podréis escapar eternamente.$"

PowerPlant_Combate_Zapdos_Surge_Texto_13:
.string "ATLAS: Así que ZAPDOS y un LÍDER DE\n"
	.string "GIMNASIO al hilo, ¿eh {PLAYER}?\l"
	.string "Parece que después de todo\l"
	.string "estuviste atento y asimilaste mi\l"
	.string "discurso de bienvenida, puedo\l"
	.string "decir que has superado cualquier\l"
	.string "expectativa que tenía sobre tu\l"
	.string "nivel, has demostrado una gran\l"
	.string "lealtad al TEAM ROCKET hoy aquí.$"

PowerPlant_Combate_Zapdos_Surge_Texto_14:
.string "ATLAS: ANDRA ha vuelto a la base\n"
	.string "ROCKET de AZULONA, y PETREL a la\l"
	.string "de RUTA 5, después de todo lo que\l"
	.string "ha ocurrido aquí, GIOVANNI querrá\l"
	.string "hacer balance de todo ello\l"
	.string "inmediatamente, deberías\l"
	.string "presentarte en su despacho cuanto\l"
	.string "antes, después de derrotar a dos\l"
	.string "legendarios y cumplir no solo tu\l"
	.string "misión, sino esta también, no\l"
	.string "quiero imaginarme cómo te recibirá\l"
	.string "nuestro líder...$"

PowerPlant_Combate_Zapdos_Surge_Texto_15:
.string "ATLAS: Vámonos ya {PLAYER}, este\n"
	.string "lugar no tardará en llenarse de\l"
	.string "policías otra vez.$"

PowerPlant_Combate_Zapdos_Surge_Texto_16:
.string "ATLAS: Ha sido un placer combatir\n"
	.string "hoy a tu lado.$"

PowerPlant_Combate_Zapdos_Surge_Texto_17:
.string "(Parece que no le quedan fuerzas\n"
	.string "para combatir).$"

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
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_in_place_left
step_end

PowerPlant_Combate_Zapdos_Surge_Move_6:
face_right
step_end

PowerPlant_Combate_Zapdos_Surge_Move_7:
walk_in_place_down
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
