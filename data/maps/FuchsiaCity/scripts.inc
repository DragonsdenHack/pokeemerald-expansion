FuchsiaCity_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, FuchsiaCity_OnTransition
	.byte 0

FuchsiaCity_OnTransition::
setflag FLAG_VISITED_FUCHSIA_CITY
end

FuchsiaCity3::
end


FuchsiaCity4::
end


FuchsiaCity5::
end


FuchsiaCity6::
end


FuchsiaCity8::
end


FuchsiaCity11::
lock     
faceplayer     
msgbox Text_11, MSGBOX_DEFAULT
release     
end

Text_11:
.string "My father is the GYM LEADER of\n"
    .string "this town.\p"
    .string "I'm training to use POISON POKÉMON\n"
    .string "as well as my father.$"



FuchsiaCity12::
lock     
faceplayer     
msgbox Text_12, MSGBOX_DEFAULT
release     
end

Text_12:
	.string "Leave me alone, ROCKET. I'm not here for\n"
	.string "you.$"


FuchsiaCity14::
lock     
faceplayer     
msgbox Text_14, MSGBOX_DEFAULT
release     
end

Text_14:
	.string "The SAFARI ZONE is open to the public.\n"
	.string "Too bad you and your organization\l"
	.string "aren't considered public.$"


FuchsiaCity16::
end


FuchsiaCity17::
lock     
faceplayer     
msgbox Text_17, MSGBOX_DEFAULT
release     
end

Text_17:
	.string "Aghh! So you've come to join the BIKERS\n"
	.string "of FUCHSIA!$"


FuchsiaCity18::
lock     
faceplayer     
msgbox Text_18, MSGBOX_DEFAULT
release     
end

Text_18:
	.string "A ROCKET like you will never be able to\n"
	.string "enter the SAFARI ZONE! … … What? You\l"
	.string "don't need it and you've already caught a\l"
	.string "KANGASKHAN in the ROCK TUNNEL? In\l"
	.string "addition to being a thief, you're a liar;\l"
	.string "it has been proven that the existence\l"
	.string "of a KANGASKHAN there, it was a hoax!$"

NeoFuchsiaCityDocumento_100::
msgbox NeoFuchsiaCityDocumento_Text_100, MSGBOX_SIGN   
end

NeoFuchsiaCityDocumento_Text_100:
.string "FUCHSIA CITY POKÉMON GYM\n"
    .string "LEADER: SACHIKO\l"
    .string "The Poisonous Ninja Master$"



FuchsiaCityDocumento_100::
msgbox FuchsiaCityDocumento_Text_100, MSGBOX_SIGN   
end

FuchsiaCityDocumento_Text_100:
.string "FUCHSIA CITY POKÉMON GYM\n"
    .string "LEADER: KOGA\l"
    .string "The Poisonous Ninja Master$"



FuchsiaCityDocumento_101::
msgbox FuchsiaCityDocumento_Text_101, MSGBOX_SIGN   
end

FuchsiaCityDocumento_Text_101:
.string "Name: KABUTO\n"
    .string "An extremely rare POKÉMON that was\l"
    .string "regenerated from a fossil.$"



FuchsiaCityDocumento_102::
msgbox FuchsiaCityDocumento_Text_102, MSGBOX_SIGN   
end

FuchsiaCityDocumento_Text_102:
.string "Name: KANGASKHAN\p"
    .string "A maternal POKÉMON that raises its\n"
    .string "young in a pouch on its belly.$"



FuchsiaCityDocumento_103::
msgbox FuchsiaCityDocumento_Text_103, MSGBOX_SIGN   
end

FuchsiaCityDocumento_Text_103:
	.string "Name: LAPRAS\n"
    .string "AKA the king of the seas.$"



FuchsiaCityDocumento_104::
msgbox FuchsiaCityDocumento_Text_104, MSGBOX_SIGN   
end

FuchsiaCityDocumento_Text_104:
.string "SAFARI GAME\n"
    .string "POKÉMON-U-CATCH!$"

NeoFuchsiaCityDocumento_105::
msgbox NeoFuchsiaCityDocumento_Text_105, MSGBOX_SIGN
msgbox NeoFuchsiaCityDocumento_Texto_2, MSGBOX_SIGN      
end

NeoFuchsiaCityDocumento_Text_105:
.string "Aquí hay una nota...$"

NeoFuchsiaCityDocumento_Texto_2:
.string "El PUESTO GUARDA DE LA ZONA SAFARI\n"
	.string "está cerrado hasta nuevo aviso.$"



FuchsiaCityDocumento_105::
msgbox FuchsiaCityDocumento_Text_105, MSGBOX_SIGN   
end

FuchsiaCityDocumento_Text_105:
.string "POKÉMON PARADISE\n"
    .string "SAFARI ZONE$"



FuchsiaCityDocumento_106::
msgbox FuchsiaCityDocumento_Text_106, MSGBOX_SIGN   
end

FuchsiaCityDocumento_Text_106:
.string "FUCHSIA CITY\n"
    .string "Behold! It's Passion Pink!$"



FuchsiaCityDocumento_107::
msgbox FuchsiaCityDocumento_Text_107, MSGBOX_SIGN   
end

FuchsiaCityDocumento_Text_107:
.string "SAFARI ZONE\n"
    .string "WARDEN'S HOME$"



FuchsiaCityDocumento_108::
msgbox FuchsiaCityDocumento_Text_108, MSGBOX_SIGN   
end

FuchsiaCityDocumento_Text_108:
.string "Name: VOLTORB\n"
    .string "The very image of a POKé BALL.$"



FuchsiaCityDocumento_109::
msgbox FuchsiaCityDocumento_Text_109, MSGBOX_SIGN   
end

FuchsiaCityDocumento_Text_109:
	.string "Name: SLOWPOKE\n"
    .string "Friendly and very slow moving.$"



FuchsiaCityDocumento_110::
msgbox FuchsiaCityDocumento_Text_110, MSGBOX_SIGN   
end

FuchsiaCityDocumento_Text_110:
	.string "Name: CHANSEY\n"
    .string "Catching one is all up to chance.$"

FuchsiaCity_Encuentro_Koga_Arriba::
lock
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_Encuentro_Koga_Move_1
waitmovement 0x0
clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
addobject 15
applymovement 15, FuchsiaCity_Encuentro_Koga_Move_2
waitmovement 0x0
goto FuchsiaCity_Encuentro_Koga

FuchsiaCity_Encuentro_Koga_Medio::
lock
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_Encuentro_Koga_Move_1
waitmovement 0x0
clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
addobject 15
applymovement 15, FuchsiaCity_Encuentro_Koga_Move_2.1
waitmovement 0x0
goto FuchsiaCity_Encuentro_Koga

FuchsiaCity_Encuentro_Koga_Abajo::
lock
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_Encuentro_Koga_Move_1
waitmovement 0x0
clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
addobject 15
applymovement 15, FuchsiaCity_Encuentro_Koga_Move_2.2
waitmovement 0x0
goto FuchsiaCity_Encuentro_Koga

FuchsiaCity_Encuentro_Koga::
msgbox FuchsiaCity_Encuentro_Koga_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox FuchsiaCity_Encuentro_Koga_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox FuchsiaCity_Encuentro_Koga_Texto_3 MSGBOX_AUTOCLOSE
playse MUS_RG_OBTAIN_KEY_ITEM
giveitem ITEM_CONTEST_PASS
waitse
delay 20
msgbox FuchsiaCity_Encuentro_Koga_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox FuchsiaCity_Encuentro_Koga_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox FuchsiaCity_Encuentro_Koga_Texto_5 MSGBOX_AUTOCLOSE
applymovement 15, FuchsiaCity_Encuentro_Koga_Move_3
waitmovement 0x0
msgbox FuchsiaCity_Encuentro_Koga_Texto_6 MSGBOX_AUTOCLOSE
applymovement 15, FuchsiaCity_Encuentro_Koga_Move_4
waitmovement 0x0
msgbox FuchsiaCity_Encuentro_Koga_Texto_7 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
fadescreen 1
delay 20
removeobject 15
fadescreen 0
delay 20
playse SE_POKENAV_CALL
delay 30
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_6F_Combate_Fantasma_Marowak_Move_1
delay 20
playse SE_POKENAV_HANG_UP
msgbox FuchsiaCity_Encuentro_Koga_Texto_8 MSGBOX_AUTOCLOSE
delay 15
playse SE_POKENAV_OFF
setvar VAR_UNUSED_0x40F7, 67
release
end

FuchsiaCity_Encuentro_Koga_Texto_1:
	.string "KOGA: {PLAYER}! I can't believe you\n"
	.string "really kicked BRUNO out the CYCLING\l"
	.string "ROAD! You're not aware of the\l"
	.string "importance of what you've done. Rest\l"
	.string "assured, I will inform GIOVANNI about\l"
	.string "your feat!$"

FuchsiaCity_Encuentro_Koga_Texto_2:
.string "KOGA: ...$"

FuchsiaCity_Encuentro_Koga_Texto_3:
	.string "You helped us maintain the SAFARI\n"
	.string "business, and now, thanks to you, the\l"
	.string "relationship between TEAM ROCKET and\l"
	.string "the BIKERS is stronger than ever. You've\l"
	.string "earned the best gift I can offer you,\l"
	.string "along with my total respect.$"

FuchsiaCity_Encuentro_Koga_Texto_4:
	.string "With this pass you could enter whenever\n"
	.string "you want to our SAFARI ZONE without\l"
	.string "paying and using your own POKÉ BALL\l"
	.string "with no any kind of limitation, it's\l"
	.string "something only the main shareholders\l"
	.string "and personalities like BILL have access\l"
	.string "to for research purposes… consider\l"
	.string "yourself fortunate, and don't worry\l"
	.string "about wearing the ROCKET uniform, you\l"
	.string "can always tell the guard that it's a\l"
	.string "cosplay you use to mock TEAM ROCKET,\l"
	.string "and he will be obligated to let you\l"
	.string "through.$"

FuchsiaCity_Encuentro_Koga_Texto_5:
.string "KOGA: What?\n"
	.string "The SEAFOAM ISLANDS?$"

FuchsiaCity_Encuentro_Koga_Texto_6:
	.string "They are southwest of here, just head\n"
	.string "to the sea south of FUCHSIA and you'll\l"
	.string "get there. You can't miss it.$"

FuchsiaCity_Encuentro_Koga_Texto_7:
	.string "KOGA: Thanks for all again {PLAYER},\n"
	.string "now I must leave, it's not convenient to\l"
	.string "be seen with a ROCKET. I need to\l"
	.string "maintain appearances if you want to\l"
	.string "keep one of yours infiltrated in\l"
	.string "privileged positions. I'll be glad to\l"
	.string "fight with you… if the opportunity\l"
	.string "arises.$"

FuchsiaCity_Encuentro_Koga_Texto_8:
	.string "GIOVANNI: {PLAYER}? How is the\n"
	.string "mission going? Are you going to SEAFOAM\l"
	.string "ISLANDS? Perfect, BLUE's team is ready\l"
	.string "to defeat MOLTRES, and ANDRA has\l"
	.string "finished the last preparations with our\l"
	.string "scientists to make her team more\l"
	.string "advantageous against ZAPDOS. I look\l"
	.string "forward to hearing from you,\l"
	.string "{PLAYER}.$"

FuchsiaCity_Encuentro_Koga_Move_1:
walk_in_place_right
step_end

FuchsiaCity_Encuentro_Koga_Move_2:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
step_end

FuchsiaCity_Encuentro_Koga_Move_2.1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
step_end

FuchsiaCity_Encuentro_Koga_Move_2.2:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
step_end

FuchsiaCity_Encuentro_Koga_Move_3:
face_down
step_end

FuchsiaCity_Encuentro_Koga_Move_4:
face_left
step_end

FuchsiaCity_Encuentro_Koga_Move_5:
emote_exclamation_mark
step_end

FuchsiaCity_Estafado::
compare VAR_UNUSED_0x4091, 2
goto_if_eq FuchsiaCity_Estafado_3
compare VAR_UNUSED_0x4091, 1
goto_if_eq FuchsiaCity_Estafado_2
msgbox FuchsiaCity_Estafado_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox FuchsiaCity_Estafado_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 8, FuchsiaCity_Estafado_Move_1
waitmovement 0x0
faceplayer
applymovement 8, FuchsiaCity_Estafado_Move_3
waitmovement 0x0
msgbox FuchsiaCity_Estafado_Texto_3 MSGBOX_AUTOCLOSE
msgbox FuchsiaCity_Estafado_Texto_13 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq FuchsiaCity_Estafado_No
msgbox FuchsiaCity_Estafado_Texto_14 MSGBOX_AUTOCLOSE
applymovement 8, FuchsiaCity_Estafado_Move_2
waitmovement 0x0
msgbox FuchsiaCity_Estafado_Texto_15 MSGBOX_AUTOCLOSE
applymovement 8, FuchsiaCity_Estafado_Move_3
waitmovement 0x0
msgbox FuchsiaCity_Estafado_Texto_16 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x4091, 1
release
end

FuchsiaCity_Estafado_No::
msgbox FuchsiaCity_Estafado_Texto_17 MSGBOX_AUTOCLOSE
release
end

FuchsiaCity_Estafado_2::
lock
faceplayer
msgbox FuchsiaCity_Estafado_Texto_12 MSGBOX_AUTOCLOSE
release
end

FuchsiaCity_Estafado_3::
lock
faceplayer
delay 20
msgbox FuchsiaCity_Estafado_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 8, FuchsiaCity_Estafado_Move_1
waitmovement 0x0
msgbox FuchsiaCity_Estafado_Texto_4 MSGBOX_AUTOCLOSE
delay 20
playse SE_SHOP
msgbox FuchsiaCity_Estafado_Texto_5 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 8, FuchsiaCity_Estafado_Move_1
waitmovement 0x0
msgbox FuchsiaCity_Estafado_Texto_6 MSGBOX_AUTOCLOSE
msgbox FuchsiaCity_Estafado_Texto_7 MSGBOX_AUTOCLOSE
showmoneybox 0, 0
delay 15
addmoney 200000 0
playse SE_SHOP
delay 15
updatemoneybox
delay 15
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox FuchsiaCity_Estafado_Texto_8 MSGBOX_DEFAULT
waitfanfare
delay 40
hidemoneybox
delay 40
msgbox FuchsiaCity_Estafado_Texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox FuchsiaCity_Estafado_Texto_10 MSGBOX_DEFAULT
givemon SPECIES_SNORLAX, 30, ITEM_LEFTOVERS
waitfanfare
delay 15
msgbox FuchsiaCity_Estafado_Texto_11 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_INVISIBLE_NINJA_BOY
fadescreen 1
removeobject 8
delay 20
fadescreen 0
release
end







FuchsiaCity_Estafado_Texto_1:
.string "I'm doomed, ruined…\n"
	.string "And all because of those scammers…$"

FuchsiaCity_Estafado_Texto_2:
.string "...\n"
	.string "...$"

FuchsiaCity_Estafado_Texto_3:
	.string "Hey, wait, ROCKET! You're my last chance!\n"
	.string "Listen to me! I've been a victim of a\l"
	.string "scam. I invested all the savings I had\l"
	.string "left: 2 million POKÉ on buying a genuine\l"
	.string "METEORITE from the METEOR FALLS, in\l"
	.string "HOENN. That METEORITE would confirm\l"
	.string "the theory on which my entire project\l"
	.string "is based, and would finish this project\l"
	.string "I've been working on for years. But it\l"
	.string "turns out those scammers sold me, at a\l"
	.string "very high price, one of the many rocks\l"
	.string "you can find in the MT.MOON, and now I'm\l"
	.string "ruined, without even money to claim\l"
	.string "anything.$"

FuchsiaCity_Estafado_Texto_4:
	.string "What are you saying?! you've defeated\n"
	.string "those scammers and they've moved to\l"
	.string "another region? And you've taken from\l"
	.string "them the money I invested in my\l"
	.string "project!$"

FuchsiaCity_Estafado_Texto_5:
	.string "({PLAYER} handed over the 2 million\n"
	.string "POKÉ to the scientist).$"

FuchsiaCity_Estafado_Texto_6:
	.string "I can't believe I've got all my money\n"
	.string "back. To be honest, I wasn't sure if I\l"
	.string "could trust you, ROCKET. And if even\l"
	.string "after managing to recover my money, I\l"
	.string "was afraid you might disappear with it,\l"
	.string "being lost forever.$"

FuchsiaCity_Estafado_Texto_7:
	.string "Now I see they are just stereotypes,\n"
	.string "and that the money you steal really has\l"
	.string "a clear purpose behind it. Here is what\l"
	.string "we agreed upon, ROCKET.$"

FuchsiaCity_Estafado_Texto_8:
.string "(You just earned 200000 POKÉ).$"

FuchsiaCity_Estafado_Texto_9:
	.string "And here is the POKÉMON I promised you.\n"
	.string "It was a real struggle to catch it even\l"
	.string "though it wasn't moving at all and spent\l"
	.string "half the battle sleeping!$"

FuchsiaCity_Estafado_Texto_10:
	.string "YOU OBTAINED A LV.35 SNORLAX!!$"

FuchsiaCity_Estafado_Texto_11:
	.string "Now I can leave, thank you for\n"
	.string "everything, ROCKET. Finally I'll be able\l"
	.string "to finish my project, I'll always be\l"
	.string "grateful to you. If someday I achieve\l"
	.string "something important, I won't hesitate\l"
	.string "to tell you.$"

FuchsiaCity_Estafado_Texto_12:
	.string "Remember, they must be on CINNABAR\n"
	.string "ISLAND, apart from being the biggest\l"
	.string "den of thieves, it's one of the last\l"
	.string "places they have left to raid in KANTO.$"

FuchsiaCity_Estafado_Texto_13:
	.string "Would you agree to try to recover the\n"
	.string "money that has unjustly been stolen\l"
	.string "from me? I promise to give you 10% of\l"
	.string "those 2 million if you succeed, and not\l"
	.string "only that, also I'll give you a powerful\l"
	.string "POKÉMON as a token of gratitude.$"

FuchsiaCity_Estafado_Texto_14:
	.string "Finally I have hopes again to recover\n"
	.string "all my money! Listen, ROCKET, the ones\l"
	.string "that scammed me are professionals at\l"
	.string "this. They constantly change the areas\l"
	.string "where they operate and the place they\l"
	.string "assemble, so people don't suspect too\l"
	.string "much, and the POLICE are unable to\l"
	.string "track them down.$"

FuchsiaCity_Estafado_Texto_15:
	.string "However, I have a hunch, and it's that\n"
	.string "those scoundrels are in that ABANDONED\l"
	.string "MANSION on CINNABAR ISLAND, by\l"
	.string "deduction, it is the last place they\l"
	.string "have left, they've already acted in\l"
	.string "FUCHSIA, CELADON, at the foot of\l"
	.string "MT.MOON…$"

FuchsiaCity_Estafado_Texto_16:
	.string "I hope you are a great TRAINER, ROCKET,\n"
	.string "they must have bought the best\l"
	.string "POKÉMON from the black market with all\l"
	.string "the money they've earned by scamming\l"
	.string "people. If you manage to recover all my\l"
	.string "money I'll give you 10% of the total, and\l"
	.string "an amazing POKÉMON that you won't find\l"
	.string "that easy. I'll be here, eagerly awaiting\l"
	.string "for you to do something about it.$"

FuchsiaCity_Estafado_Texto_17:
.string "Oh…\n"
	.string "This can't be…\l"
	.string "What am I going to do now?$"

FuchsiaCity_Estafado_Move_1:
emote_exclamation_mark
step_end

FuchsiaCity_Estafado_Move_2:
walk_in_place_up
step_end

FuchsiaCity_Estafado_Move_3:
face_player
step_end

FuchsiaCity_Entrenador_Especial::
lock
faceplayer
compare VAR_ROUTE122_STATE, 0
goto_if_gt FuchsiaCity_Entrenador_Especial_3
msgbox FuchsiaCity_Entrenador_Especial_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox FuchsiaCity_Entrenador_Especial_Texto_2 MSGBOX_AUTOCLOSE
delay 20
compare VAR_UNUSED_0x40F7, 87
goto_if_gt FuchsiaCity_Entrenador_Especial_2
msgbox FuchsiaCity_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
release
end


FuchsiaCity_Entrenador_Especial_2::
msgbox FuchsiaCity_Entrenador_Especial_Texto_5 MSGBOX_AUTOCLOSE
msgbox FuchsiaCity_Entrenador_Especial_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq FuchsiaCity_Entrenador_Especial_2_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox FuchsiaCity_Entrenador_Especial_Texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CINTAEXPERTO, FuchsiaCity_Entrenador_Especial_Texto_8
msgbox FuchsiaCity_Entrenador_Especial_Texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_EXPERT_BELT
msgbox FuchsiaCity_Entrenador_Especial_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
msgbox FuchsiaCity_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE122_STATE, 1
release
end

FuchsiaCity_Entrenador_Especial_2_No::
msgbox FuchsiaCity_Entrenador_Especial_Texto_10 MSGBOX_AUTOCLOSE
release
end

FuchsiaCity_Entrenador_Especial_3::
msgbox FuchsiaCity_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
release
end


FuchsiaCity_Entrenador_Especial_Texto_1.1:
	.string "You obtained an EXPERT BELT from BUG\n"
	.string "CATCHER!$"

FuchsiaCity_Entrenador_Especial_Texto_1:
	.string "I've seen the entire SAFARI ZONE\n"
	.string "already. The POKÉMON living there are no\l"
	.string "longer a mystery to me. Honestly, I\l"
	.string "think I'm the most powerful BUG CATCHER\l"
	.string "in the entire region. POKÉMON like\l"
	.string "BUTTERFREE or BEEDRILL are like “a\l"
	.string "bug” to me, don't you agree?$"

FuchsiaCity_Entrenador_Especial_Texto_2:
.string "...\n"
	.string "...$"

FuchsiaCity_Entrenador_Especial_Texto_3:
	.string "Well, it seems like you need some more\n"
	.string "training. I won't fight against anyone\l"
	.string "who isn't extraordinary, maybe when you\l"
	.string "become stronger.$"

FuchsiaCity_Entrenador_Especial_Texto_4:
	.string "The EXPERT BELT increases the damage\n"
	.string "of super-effective moves by 20%,\l"
	.string "making it very difficult for the\l"
	.string "opponent to resist that move. It's ideal\l"
	.string "to POKÉMON with a wide variety of\l"
	.string "moves, such as STARMIE, ELECTABUZZ or\l"
	.string "PINSIR.$"

FuchsiaCity_Entrenador_Especial_Texto_5:
	.string "Yes! You seem like a great TRAINER! If\n"
	.string "you defeat me, I'll give you something\l"
	.string "very useful!$"

FuchsiaCity_Entrenador_Especial_Texto_6:
.string "So, do you accept the challenge?$"

FuchsiaCity_Entrenador_Especial_Texto_7:
.string "Let's go then!\n"
	.string "I hope you don't disappoint me!$"

FuchsiaCity_Entrenador_Especial_Texto_8:
	.string "I didn't know there were people so\n"
	.string "strong!$"

FuchsiaCity_Entrenador_Especial_Texto_9:
	.string "So, are you training for the LEAGUE\n"
	.string "CHAMPIONSHIP? No wonder you and your\l"
	.string "POKÉMON are formidable! This will surely\l"
	.string "help you refine your team even more!$"

FuchsiaCity_Entrenador_Especial_Texto_10:
	.string "A true TRAINER never shies away from a\n"
	.string "great battle when it is purposed…$"

FuchsiaCity_Basura::
lock
msgbox FuchsiaCity_Basura_Texto_1 MSGBOX_SIGN
msgbox FuchsiaCity_Basura_Texto_2 MSGBOX_SIGN
release
end

FuchsiaCity_Basura_Texto_1:
.string "Do not litter.$"

FuchsiaCity_Basura_Texto_2:
.string "Please, do not throw trash.$"

FuchsiaCity_MentiraViaje::
lock
msgbox FuchsiaCity_MentiraViaje_Texto_1 MSGBOX_SIGN
release
end

FuchsiaCity_MentiraViaje_Texto_1:
	.string "The GUARD is on a trip. That's the reason\n"
	.string "why the SAFARI ZONE is closed to the\l"
	.string "public.$"


