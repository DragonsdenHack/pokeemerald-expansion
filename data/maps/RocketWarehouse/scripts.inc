RocketWarehouse_MapScripts::
	.byte 0

RocketWarehouse1::
end



RocketWarehouse3::
lock     
faceplayer     
msgbox RocketWarehouse_Text_3, MSGBOX_DEFAULT
release     
end

RocketWarehouse_Text_3:
	.string "Basierend auf der Energie, die dieser\n"
	.string "POKéBALL ausstrahlt, sieht man\l"
	.string "deutlich, dass sich ein ziemlich starkes\l"
	.string "POKéMON darin befinden muss. {PAUSE 5}...{PAUSE 5}$"




RocketWarehouse4::
lock     
faceplayer     
msgbox RocketWarehouse_Text_4, MSGBOX_DEFAULT
release     
end

RocketWarehouse_Text_4:
	.string "ATLAS wartet auf dich und die andere\n"
	.string "REKRUTIN, die mich besiegen konnte. Geh\l"
	.string "weiter und höre dir aufmerksam die\l"
	.string "Einzelheiten der Mission an.$"



RocketWarehouse5::
end



RocketWarehouse6::
lock
compare VAR_ROUTE108_STATE, 6
goto_if_gt RocketWarehouse_Atlas_Mision_Secundaria_4
compare VAR_ROUTE108_STATE, 5
goto_if_gt RocketWarehouse_Atlas_Mision_Secundaria_3
compare VAR_ROUTE108_STATE, 3
goto_if_gt RocketWarehouse_Atlas_Mision_Secundaria_2
compare VAR_ROUTE108_STATE, 2
goto_if_gt RocketWarehouse_Atlas_Mision_Secundaria   
msgbox RocketWarehouse_Text_6, MSGBOX_SIGN
release     
end

RocketWarehouse_Atlas_Mision_Secundaria::
lock
faceplayer
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_1 MSGBOX_NPC
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_2 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouse_Atlas_Mision_Secundaria_Move_1
waitmovement 0x0
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_3 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouse_Atlas_Mision_Secundaria_Move_2
waitmovement 0x0
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_4 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouse_Atlas_Mision_Secundaria_Move_4
waitmovement 0x0
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_5 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouse_Atlas_Mision_Secundaria_Move_3
waitmovement 0x0
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_6 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE108_STATE, 4
release
end

RocketWarehouse_Atlas_Mision_Secundaria_2::
faceplayer
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_6 MSGBOX_AUTOCLOSE
release
end


RocketWarehouse_Atlas_Mision_Secundaria_3::
faceplayer
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_7 MSGBOX_AUTOCLOSE
playse SE_SHOP
addmoney 300000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_8 MSGBOX_DEFAULT
waitfanfare
applymovement 6, Atlas_Move_1
waitmovement 0x0
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_10 MSGBOX_DEFAULT
givemon SPECIES_BOMUSHIKAA, 60, ITEM_FIRE_GEM
waitfanfare
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_11 MSGBOX_AUTOCLOSE 
applymovement 6, Atlas_Move_1
waitmovement 0x0
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_12 MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_673
setvar VAR_ROUTE108_STATE, 7
release
end

RocketWarehouse_Atlas_Mision_Secundaria_4::
faceplayer
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_13 MSGBOX_AUTOCLOSE
release
end

Atlas_Move_1:
walk_in_place_down
step_end

RocketWarehouse_Atlas_Mision_Secundaria_Move_1:
walk_in_place_left
step_end

RocketWarehouse_Atlas_Mision_Secundaria_Move_2:
face_player
step_end

RocketWarehouse_Atlas_Mision_Secundaria_Move_3:
walk_in_place_down
step_end

RocketWarehouse_Atlas_Mision_Secundaria_Move_4:
face_left
step_end

RocketWarehouse_Atlas_Mision_Secundaria_Texto_1:
	.string "ARCHER: The prodigal son is back. Hey,\n"
	.string "{PLAYER}?$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_2:
	.string "After defeating a pure LEGENDARIES\n"
	.string "and PSEUDOLEGENDARIES team, what you\l"
	.string "might find within the confined space of\l"
	.string "these islands should pale in\l"
	.string "comparison, don't you think?$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_3:
	.string "Perhaps I can assist you. I am familiar\n"
	.string "with these islands and some of their\l"
	.string "secrets. Have you visited QUEST\l"
	.string "ISLAND? There's an old woman who\l"
	.string "resides in one of its houses.$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_4:
	.string "Inform her that you come on my behalf.\n"
	.string "She can reveal mysteries of these\l"
	.string "islands that someone like that RED\l"
	.string "would never find on his own.$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_5:
	.string "I hope this serves as a stimulus for\n"
	.string "you. These islands can be a paradise or\l"
	.string "an unbearable bore, depending on who\l"
	.string "you talk to.$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_6:
	.string "If you visit her and uncover her secret,\n"
	.string "come back here. I'll give you a reward\l"
	.string "personally, like I did in your first\l"
	.string "missions, right? Don't forget, the old\l"
	.string "lady lives in a QUEST ISLAND house.$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_7:
	.string "{PLAYER}! You've returned! ZOE has\n"
	.string "already informed me of everything!\l"
	.string "Honestly, despite defeating LANCE, I\l"
	.string "thought the technique and mastery of\l"
	.string "an old LEADER like her could put you in a\l"
	.string "tight spot. I see you take it seriously\l"
	.string "even on vacation.$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_8:
	.string "-{PLAYER} has earned ¥300,000!-$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_9:
	.string "And most importantly, I'll give you this\n"
	.string "little one. Trust me, it's hard for me to\l"
	.string "let go of him. I care for him, but I can't\l"
	.string "think of better hands for him to be in\l"
	.string "than yours.$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_10:
.string "YOU OBTAINED A LV.60 BOMUSHIKAA!$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_11:
	.string "It is a very special POKÉMON, with a big\n"
	.string "heart and loyal to its TRAINER. It\l"
	.string "belongs to the ancient JOHTO, extinct\l"
	.string "in the wild, only a few old TRAINERS\l"
	.string "from the region possess one.$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_12:
	.string "It's known to share lines with DEWGONG,\n"
	.string "although its BASE STATs and type\l"
	.string "combination surpass it. Your\l"
	.string "determination and principles are\l"
	.string "perfect to care for it.$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_13:
	.string "The hidden GYM is just one example\n"
	.string "you've come to know thanks to me, but…\l"
	.string "How many magnificent places might we be\l"
	.string "missing out on due to a lack of\l"
	.string "appropriate contacts?$"

RocketWarehouse_Text_6:
     .string "ARCHER: {PAUSE 15}…{PAUSE 15} …{PAUSE 15}\p"
	.string "-It seems he's deep working\n"
	.string "in a top project.-$"



RocketWarehouse7::
end



RocketWarehouse8::
end



RocketWarehouse9::
lock     
faceplayer     
msgbox RocketWarehouse_Text_9, MSGBOX_DEFAULT
release     
end

RocketWarehouse_Text_9:
	.string "Datenkontrolle ist das Öl des 21.\n"
	.string "Jahrhunderts. Wer sie kontrolliert, wird\l"
	.string "die ganze Welt beherrschen!$"




RocketWarehouse10::
end



RocketWarehouse11::
end



RocketWarehouse12::
end



RocketWarehouse13::
lock     
faceplayer     
msgbox RocketWarehouse_Text_13, MSGBOX_DEFAULT
release     
end

RocketWarehouse_Text_13:
	.string "Basierend auf der Energie, die dieser\n"
	.string "POKéBALL ausstrahlt, sieht man\l"
	.string "deutlich, dass sich ein ziemlich starkes\l"
	.string "POKéMON darin befinden muss {PAUSE 5} … {PAUSE 5}$"




RocketWarehouse14::
lock     
faceplayer     
msgbox RocketWarehouse_Text_14, MSGBOX_DEFAULT
release     
end

RocketWarehouse_Text_14:
	.string "TEAM ROCKET spart nicht bei Forschung,\n"
	.string "Innovation und Entwicklung. Deshalb\l"
	.string "sind wir die Vorbildorganisation in\l"
	.string "KANTO!$"




RocketWarehouse15::
lock     
faceplayer     
msgbox RocketWarehouse_Text_15, MSGBOX_DEFAULT
release     
end

RocketWarehouse_Text_15:
	.string "Mein Leben als Verbrecher macht mich so\n"
	.string "lebendig! Ist das bei dir auch so,\l"
	.string "Kumpel?$"




RocketWarehouse16::
lock     
faceplayer     
msgbox RocketWarehouse_Text_16, MSGBOX_DEFAULT
release     
end

RocketWarehouse_Text_16:
	.string "Ich bin auf der Hut. Einige Kinder\n"
	.string "schnüffeln heutzutage an Orten herum,\l"
	.string "an denen sie nichts zu suchen haben.$"


RocketWarehouse_EventScript_Isaac::
	trainerbattle_single TRAINER_ISAAC_5, RocketWarehouse_Text_IsaacIntro, RocketWarehouse_Text_IsaacDefeated
	msgbox RocketWarehouse_Text_IsaacPostBattle, MSGBOX_AUTOCLOSE
	end



RocketWarehouse_EventScript_Recluta::
	trainerbattle_single TRAINER_ISAAC_3, RocketWarehouse_Text_ReclutaIntro, RocketWarehouse_Text_ReclutaDefeated
	msgbox RocketWarehouse_Text_ReclutaPostBattle, MSGBOX_AUTOCLOSE
	end



RocketWarehouse_EventScript_Recluta2::
	trainerbattle_single TRAINER_ISAAC_4, RocketWarehouse_Text_Isaac_4Intro, RocketWarehouse_Text_Isaac_4Defeated
	msgbox RocketWarehouse_Text_Isaac_4PostBattle, MSGBOX_AUTOCLOSE
	end



RocketWarehouseDocumento_106::
lock     
msgbox RocketWarehouseDocumento_Text_106, MSGBOX_DEFAULT
release     
end

RocketWarehouseDocumento_Text_106:
	.string "Based on our recent research, specific\n"
	.string "radio frequencies have the potential\l"
	.string "to directly impact the evolution\l"
	.string "process of POKÉMON, induce mutations\l"
	.string "that alter their original color, and in\l"
	.string "extreme instances, alter their overall\l"
	.string "BASE STATs, resulting in complete gene\l"
	.string "modification.$"



RocketWarehouseDocumento_100::
msgbox RocketWarehouseDocumento_Text_100, MSGBOX_SIGN   
end

RocketWarehouseDocumento_Text_100:
	.string "Basierend auf der Energie, die dieser\n"
	.string "POKéBALL ausstrahlt, sieht man\l"
	.string "deutlich, dass sich ein ziemlich starkes\l"
	.string "POKéMON darin befinden muss {PAUSE 5}...{PAUSE 5}$"




RocketWarehouseDocumento_101::
msgbox RocketWarehouseDocumento_Text_101, MSGBOX_SIGN   
end

RocketWarehouseDocumento_Text_101:
	.string "Basierend auf der Energie, die dieser\n"
	.string "POKéBALL ausstrahlt, sieht man\l"
	.string "deutlich, dass sich ein ziemlich starkes\l"
	.string "POKéMON darin befinden muss {PAUSE 5}...{PAUSE 5}$"



RocketWarehouseDocumento_102::
msgbox RocketWarehouseDocumento_Text_102, MSGBOX_SIGN   
end

RocketWarehouseDocumento_Text_102:
    .string "Ein mit Grafiken und Text ausgestatteter\n"
    .string "Bericht ist auf dem PC-Monitor.\p"
    .string "“Der Einfluss von Magnetwellen\n"
    .string "bei der POKéMON-Entwicklung”…\p"
    .string "… … … … … …\p"
    .string "Es ist schwierig zu verstehen…$"



RocketWarehouseSoldado::
lock
faceplayer
applymovement 4, RocketWarehouse_Soldadomove2
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketWarehouse_Soldadomove1
waitmovement 0x0
msgbox RocketWarehouseSoldado_Text_Soldado1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_LYDIA_1, RocketWarehouseSoldado_Text_Soldado2
msgbox RocketWarehouseSoldado_Text_Soldado3, MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 3
release
end

RocketWarehouseSoldad2::
lock
faceplayer
applymovement 4, RocketWarehouse_Soldadomove3
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketWarehouse_Soldadomove1
waitmovement 0x0
msgbox RocketWarehouseSoldado_Text_Soldado1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_LYDIA_1, RocketWarehouseSoldado_Text_Soldado2
msgbox RocketWarehouseSoldado_Text_Soldado3, MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 3
release
end

RocketWarehouseSoldad3::
lock
faceplayer
applymovement 4, RocketWarehouse_Soldadomove4
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketWarehouse_Soldadomove1
waitmovement 0x0
msgbox RocketWarehouseSoldado_Text_Soldado1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_LYDIA_1, RocketWarehouseSoldado_Text_Soldado2
msgbox RocketWarehouseSoldado_Text_Soldado3, MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 3
release
end

RocketWarehouseSoldad4::
lock
faceplayer
applymovement 4, RocketWarehouse_Soldadomove5
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketWarehouse_Soldadomove6
waitmovement 0x0
msgbox RocketWarehouseSoldado_Text_Soldado1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_LYDIA_1, RocketWarehouseSoldado_Text_Soldado2
msgbox RocketWarehouseSoldado_Text_Soldado3, MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 3
release
end


RocketWarehouseSoldado_Text_Soldado1:
	.string "Nicht so schnell! ATLAS hat mich\n"
	.string "ausdrücklich darum gebeten, die vier\l"
	.string "neuen Rekruten zu testen. Nur wenn du\l"
	.string "mich besiegst, wirst du dir das Recht\l"
	.string "verdienen, um eine spezielle Mission zu\l"
	.string "wetteifern. Tatsächlich haben sich zwei\l"
	.string "der drei REKRUTEN diese Möglichkeit\l"
	.string "schon verspielt, weil ich sie besiegt\l"
	.string "habe. Du bist der Letzte, der geprüft\l"
	.string "werden muss!$"


RocketWarehouseSoldado_Text_Soldado2:
	.string "Wow! Wir haben also zwei\n"
	.string "vielversprechende REKRUTEN.\p"
	.string "Interessant.$"


RocketWarehouseSoldado_Text_Soldado3:
	.string "ATLAS wartet auf dich und die andere\n"
	.string "REKRUTIN, die mich besiegen konnte. Geh\l"
	.string "weiter und höre dir aufmerksam die\l"
	.string "Einzelheiten der Mission an.$"



RocketWarehouse_Soldadomove1:
walk_in_place_right
step_end

RocketWarehouse_Soldadomove2:
face_left
step_end

RocketWarehouse_Soldadomove3:
face_left
walk_left
step_end

RocketWarehouse_Soldadomove4:
face_left
walk_left
walk_left
step_end

RocketWarehouse_Soldadomove5:
face_down
step_end

RocketWarehouse_Soldadomove6:
walk_in_place_up
step_end


RocketWarehouseMisionAtlas::
lock
faceplayer
applymovement OBJ_EVENT_ID_PLAYER, RocketWarehouseMisionAtlasmove1
applymovement 6, RocketWarehouseMisionAtlasmove2
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas1 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouseMisionAtlasmove2
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas2 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouseMisionAtlasmove3
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas3 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouseMisionAtlasmove4
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas4 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouseMisionAtlasmove5
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas5 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouseMisionAtlasmove6
waitmovement 0x0
applymovement 6, RocketWarehouseMisionAtlasmove2
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas6 MSGBOX_AUTOCLOSE
lock
faceplayer
delay 10
applymovement 17, RocketWarehouseMisionAtlasmove7
waitmovement 0x0
delay 10
applymovement OBJ_EVENT_ID_PLAYER, RocketWarehouseMisionAtlasmove8
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANDRA_1, RocketWarehouse_Text_MisionAtlas8
msgbox RocketWarehouse_Text_MisionAtlas9 MSGBOX_DEFAULT
applymovement OBJ_EVENT_ID_PLAYER, RocketWarehouseMisionAtlasmove9
applymovement 17, RocketWarehouseMisionAtlasmove9
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas10 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, RocketWarehouseMisionAtlasmove9.2
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas10_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, RocketWarehouseMisionAtlasmove9.1
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas10_2 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouseMisionAtlasmove9.3
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas10_3 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, RocketWarehouseMisionAtlasmove9.4
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas10_4 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouseMisionAtlasmove9.5
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas10_5 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouseMisionAtlasmove9.5
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas10_6 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_OBTAIN_TMHM
givemon SPECIES_SENTRET, 5, ITEM_NONE
waitfanfare
msgbox RocketWarehouse_Text_MisionAtlas11 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouseMisionAtlasmove2
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas12 MSGBOX_AUTOCLOSE
applymovement 17, RocketWarehouseMisionAtlasmove10
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas13 MSGBOX_AUTOCLOSE
applymovement 17, RocketWarehouseMisionAtlasmove7.1
waitmovement 0x0
delay 5
applymovement OBJ_EVENT_ID_PLAYER, RocketWarehouseMisionAtlasmove8
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas14 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement OBJ_EVENT_ID_PLAYER, RocketWarehouseMisionAtlasmove8.1
applymovement 17, RocketWarehouseMisionAtlasmove7.2
waitmovement 0x0
setflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
delay 30
removeobject 17
setflag FLAG_HIDE_ROUTE_101_BIRCH
setflag FLAG_HIDE_ROUTE_103_BIRCH
setflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_2
setflag FLAG_HIDE_ROUTE_120_GABBY_AND_TY_2
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_2
setflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_3
setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
clearflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_1
setvar VAR_UNUSED_0x40F7, 4
release
end

RocketWarehouseMisionAtlasmove7.2:
delay_8
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_left
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
step_end

RocketWarehouseMisionAtlasmove8.1:
face_left
lock_facing_direction
walk_fast_right
unlock_facing_direction
delay_16
delay_8
face_down
step_end

RocketWarehouseMisionAtlasmove9.5:
walk_in_place_left
step_end

RocketWarehouseMisionAtlasmove9.4:
walk_slow_down
step_end

RocketWarehouseMisionAtlasmove9.3:
walk_slow_up
step_end

RocketWarehouseMisionAtlasmove9.2:
face_right
step_end

RocketWarehouseMisionAtlasmove9.1:
walk_in_place_right
step_end

RocketWarehouse_Text_MisionAtlas1:
	.string "ATLAS: Nun, es scheint, dass wir\n"
	.string "niemanden mehr erwarten. Ihr zwei\l"
	.string "werdet die Möglichkeit haben, einen\l"
	.string "guten Start in dieser Organisation zu\l"
	.string "erwischen. Ich werde euch die Details\l"
	.string "für eure Mission mitteilen. Hört gut zu.$"

RocketWarehouse_Text_MisionAtlas2:
	.string "Im Norden dieser Insel, im\n"
	.string "FERIENPARADIES, hat sich kürzlich die\l"
	.string "neue lokale KONSULIN niedergelassen.\l"
	.string "Besagte Konsulin ist dafür zuständig,\l"
	.string "die Beziehungen KANTOS zu den SEVII\l"
	.string "EILANDEN zu pflegen. Damals haben wir\l"
	.string "hinter den Kulissen ein paar Fäden\l"
	.string "gezogen, um ihre Versetzung hierher zu\l"
	.string "ermöglichen - mit dem Ziel, freie Hand zu\l"
	.string "haben, um so alle möglichen Exporte\l"
	.string "nach Kanto durchzuführen. Ohne Zolle\l"
	.string "oder irgendwelche Steuern zahlen zu\l"
	.string "müssen, was für unser Geschäft\l"
	.string "selbstverständlich perfekt war.$"


RocketWarehouse_Text_MisionAtlas3:
	.string "Jedoch hat sie vor kurzem sämtliche\n"
	.string "Verbindungen zu uns gekappt und wir\l"
	.string "haben Hinweise darauf, dass sie\l"
	.string "beabsichtigt, die Behörden in KANTO\l"
	.string "über unsere Aktivitäten auf den SEVII\l"
	.string "EILANDEN zu unterrichten. Dies würde\l"
	.string "die Rentabilität unseres Geschäfts\l"
	.string "hier erheblich schmälern.$"


RocketWarehouse_Text_MisionAtlas4:
	.string "Eure Mission ist klar. Geht zu ihr und\n"
	.string "ruft ihr in Erinnerung, wem sie ihre\l"
	.string "aktuelle Stellung zu verdanken hat!\l"
	.string "Macht ihr deutlich, dass wir auf ihrer\l"
	.string "Seite sind. Bietet ihr an,\l"
	.string "Gesellschafterin unserer Organisation\l"
	.string "zu werden und stellt sicher, dass sie\l"
	.string "versteht, dass sie aufgrund ihrer\l"
	.string "Position eine Reihe von Privilegien\l"
	.string "genießen wird.$"


RocketWarehouse_Text_MisionAtlas5:
	.string "Falls sie unser Angebot weiterhin\n"
	.string "ablehnt und durchblicken lässt, dass\l"
	.string "die Behörden über unsere Pläne zu\l"
	.string "informieren gedenkt, zeigt keine Gnade.\l"
	.string "Niemand droht TEAM ROCKET! In dem Fall\l"
	.string "müsst ihr sie zum Schweigen bringen,\l"
	.string "indem ihr sie in einem Kampf besiegt!\l"
	.string "Macht all ihre POKéMON kampfunfähig, um\l"
	.string "sie daran zu hindern, mit SURFER\l"
	.string "abzuhauen! Sobald das erledigt ist,\l"
	.string "kümmern wir uns um den Rest.$"


RocketWarehouse_Text_MisionAtlas6:
	.string "Genug geredet. Bevor ich euch die Dinge\n"
	.string "gebe, die ihr für eure Mission braucht,\l"
	.string "verlange ich, dass ihr hier und jetzt\l"
	.string "gegeneinander kämpft. Ich muss mich\l"
	.string "persönlich davon überzeugen, dass ihr\l"
	.string "zumindest ein Mindestmaß an Kompetenz\l"
	.string "mitbringt. Zeigt mir, was ihr gelernt\l"
	.string "habt!$"


RocketWarehouse_Text_MisionAtlas7:
	.string "Ich habe schon die anderen beiden\n"
	.string "Rekruten besiegt! Du hast keine Chance\l"
	.string "mich zu besiegen! Mein ZUBAT ist besser\l"
	.string "als deins!$"


RocketWarehouse_Text_MisionAtlas8:
.string "Wie kann das sein?\n"
.string "Ist dein ZUBAT stärker als meins?$"

RocketWarehouse_Text_MisionAtlas9:
	.string "Das ergibt keinen Sinn? Warum hast du\n"
	.string "mich besiegt, wenn wir beide unter\l"
	.string "denselben Voraussetzungen gestartet\l"
	.string "haben?$"


RocketWarehouse_Text_MisionAtlas10:
	.string "Das reicht! Ihr werdet weitere POKéMON\n"
	.string "neben ZUBAT gebrauchen, sofern ihr\l"
	.string "kompetent sein wollt, versteht sich.\l"
	.string "Ihr könnt hier im Gras MAUZI, TAUBSI,\l"
	.string "RATTFRATZ, WIESOR und sogar VULPIX\l"
	.string "und ENTON finden, wenn ihr wisst, wo ihr\l"
	.string "suchen müsst. Und das bringt mich zum\l"
	.string "zweiten Teil eurer Mission. Um zum\l"
	.string "FERIENPARADIES zu gelangen, braucht\l"
	.string "ihr ein POKéMON, welches SURFER\l"
	.string "beherrscht. Es ist hinlänglich bekannt,\l"
	.string "dass die WIESOR im wilden Gras hier\l"
	.string "diese Attacke beherrschen.$"


RocketWarehouse_Text_MisionAtlas10_1:
	.string "In der Vergangenheit haben ROCKETs\n"
	.string "noch selbst eins im hohen Gras\l"
	.string "gefangen - mit ihren bloßen Händen.$"

RocketWarehouse_Text_MisionAtlas10_2:
	.string "Aber diese Methode, die eigentlich dazu\n"
	.string "gedacht war, ROCKETs wichtige\l"
	.string "Eigenschaften wie Improvisation,\l"
	.string "Anpassungsfähigkeit und Tatkraft\l"
	.string "beizubringen {PAUSE 25} … {PAUSE 25} wurde wieder verworfen.$"

RocketWarehouse_Text_MisionAtlas10_3:
	.string "Anfangs wurde sie aus Effizienzgründen\n"
	.string "aufgegeben, denn wir können einfach\l"
	.string "eine große Anzahl an WIESOR auf einmal\l"
	.string "fangen und sie für neue Rekruten\l"
	.string "bereithalten, aber {PAUSE 5}…{PAUSE 5}$"

RocketWarehouse_Text_MisionAtlas10_4:
	.string "Der Hauptgrund liegt in der neuen\n"
	.string "Generation selbst. Sie wollen, dass\l"
	.string "ihnen alles auf einem Silbertablett\l"
	.string "serviert wird. Sie sind ebenfalls nicht\l"
	.string "in der Lage, auch nur die geringsten\l"
	.string "Unannehmlichkeiten zu ertragen, auch\l"
	.string "wenn sie einem höheren Zweck dienen.$"

RocketWarehouse_Text_MisionAtlas10_5:
	.string "TEAM ROCKET, als eine Organisation, die\n"
	.string "bestrebt ist, weiter relevant zu\l"
	.string "bleiben, hat keine andere Wahl, als in\l"
	.string "diesem Fall nachzugeben. Wenn Leute ein\l"
	.string "Buch nach seinem Einband beurteilen,\l"
	.string "bleibt einem nichts anderes übrig, als\l"
	.string "es attraktiv zu gestalten - wenn auch\l"
	.string "nur ein wenig. Vielleicht werden dann\l"
	.string "diejenigen, die nur an der Oberfläche\l"
	.string "kratzen, tiefer in die Materie\l"
	.string "eintauchen.$"

RocketWarehouse_Text_MisionAtlas10_6:
    .string "In Anbetracht dessen … \p"
	.string "Hier habt ihr eure WIESOR.$"

RocketWarehouse_Text_MisionAtlas11:
	.string "Macht euch keine Sorgen über\n"
	.string "eventuelle Komplikationen, wenn ihr\l"
	.string "SURFER benutzt. Wir sind TEAM ROCKET!\l"
	.string "Wir sind nicht an die dumme Regel\l"
	.string "gebunden, dass man eine gewisse Anzahl\l"
	.string "von Orden besitzen muss, um HMs nutzen\l"
	.string "zu können! Ihr nutzt sie einfach, wenn\l"
	.string "ihr es für notwendig haltet und damit\l"
	.string "hat's sich!$"

RocketWarehouse_Text_MisionAtlas12:
	.string "Mehr habe ich euch nicht zu sagen.\n"
	.string "Kehrt hierher zurück, wenn ihr eure\l"
	.string "Mission erfolgreich abgeschlossen\l"
	.string "habt. Und denkt daran: Chancen muss\l"
	.string "man ergreifen, wenn sie sich einem\l"
	.string "bieten. Tut man dies nicht, sind sie für\l"
	.string "immer verloren.$"

RocketWarehouse_Text_MisionAtlas13:
 .string "Jawohl, CHEF-ADMINISTRATOR ATLAS!$"

RocketWarehouse_Text_MisionAtlas14:
	.string "Wir treffen uns am HAUS DER KONSULIN.\n"
	.string "Ich lasse nicht zu, dass ein anderer\l"
	.string "Rekrut mir zuvorkommt! Ich werde die\l"
	.string "Sache mit ihr klären und die Belohnung\l"
	.string "für den Abschluss der Mission erhalten!\l"
	.string "Dich brauche ich nicht!$"


RocketWarehouseMisionAtlasmove1:
walk_up
walk_up
walk_up
walk_up
walk_right
step_end

RocketWarehouseMisionAtlasmove2:
walk_in_place_left
step_end

RocketWarehouseMisionAtlasmove3:
walk_up
step_end

RocketWarehouseMisionAtlasmove4:
walk_down
face_left
step_end

RocketWarehouseMisionAtlasmove5:
face_right
step_end

RocketWarehouseMisionAtlasmove6:
face_right
step_end

RocketWarehouseMisionAtlasmove7:
face_down
step_end

RocketWarehouseMisionAtlasmove7.1:
walk_in_place_down
step_end

RocketWarehouseMisionAtlasmove8:
face_up
step_end

RocketWarehouseMisionAtlasmove9:
face_right
step_end

RocketWarehouseMisionAtlasmove10:
walk_in_place_right
step_end

RocketWarehouse_Vuelta_MisionAtlas_move4.1:
emote_exclamation_mark
step_end

RocketWarehouse_Vuelta_MisionAtlas_move4.2:
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end



RocketWarehouse_Vuelta_MisionAtlas::
applymovement OBJ_EVENT_ID_PLAYER, RocketWarehouse_Vuelta_MisionAtlas_move1
waitmovement 0x0
delay 20
fadescreen 1
clearflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
delay 20
addobject 17
fadescreen 0
showmoneybox 0, 0
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas1 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas1_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_SHOP
addmoney 25000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas2 MSGBOX_DEFAULT
waitfanfare
delay 50
hidemoneybox
playfanfare MUS_OBTAIN_ITEM
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas3 MSGBOX_DEFAULT
waitfanfare
applymovement 6, RocketWarehouse_Vuelta_MisionAtlas_move2
waitmovement 0x0
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas4 MSGBOX_AUTOCLOSE
delay 10
applymovement 6, RocketWarehouse_Vuelta_MisionAtlas_move2.1
waitmovement 0x0
delay 10
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas4.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, RocketWarehouse_Vuelta_MisionAtlas_move2
waitmovement 0x0
delay 15
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas5 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 17, RocketWarehouse_Vuelta_MisionAtlas_move4.1
applymovement 6, RocketWarehouse_Vuelta_MisionAtlas_move3
waitmovement 0x0
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas6 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, RocketWarehouse_Vuelta_MisionAtlas_move2
waitmovement 0x0
delay 15
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas7 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, RocketWarehouse_Vuelta_MisionAtlas_move2.1
waitmovement 0x0
delay 15
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas7.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 17, RocketWarehouse_Vuelta_MisionAtlas_move4
waitmovement 0x0
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas8 MSGBOX_AUTOCLOSE
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas9 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouse_Vuelta_MisionAtlas_move5
waitmovement 0x0
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas10 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 17, RocketWarehouse_Vuelta_MisionAtlas_move4.1
applymovement OBJ_EVENT_ID_PLAYER, RocketWarehouse_Vuelta_MisionAtlas_move4.1
waitmovement 0x0
waitse
delay 25
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas10.1 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas11 MSGBOX_AUTOCLOSE
delay 10
playfanfare MUS_OBTAIN_TMHM
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas12 MSGBOX_DEFAULT
giveegg SPECIES_HOUNDOUR
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas13 MSGBOX_DEFAULT
waitfanfare
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas14 MSGBOX_AUTOCLOSE
delay 10
applymovement 6, RocketWarehouseMisionAtlasmove9.5
waitmovement 0x0
delay 10
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas14.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 17, RocketWarehouse_Vuelta_MisionAtlas_move4
waitmovement 0x0
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas15 MSGBOX_AUTOCLOSE
applymovement 17, RocketWarehouse_Vuelta_MisionAtlas_move4.2
waitmovement 0x0
setflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
delay 20
removeobject 17
setvar VAR_UNUSED_0x40F7, 6
release
end

RocketWarehouse_Text_Vuelta_MisionAtlas1:
	.string "ATLAS: Gut. Ihr seid zurück. Wie ihr\n"
	.string "bereits von der Eröffnungsrede wisst,\l"
	.string "werden hier bei TEAM ROCKET Erfolge\l"
	.string "belohnt.$"

RocketWarehouse_Text_Vuelta_MisionAtlas1_1:
	.string "Für uns zählt das Endergebnis und da es\n"
	.string "in diesem Fall positiv ist, erhaltet ihr\l"
	.string "hiermit eure Belohnungen.$"

RocketWarehouse_Text_Vuelta_MisionAtlas2:
	.string "Du erhältst 25.000¥!$"

RocketWarehouse_Text_Vuelta_MisionAtlas3:
.string "ANDRA erhält 25.000¥!$"

RocketWarehouse_Text_Vuelta_MisionAtlas4:
	.string "ATLAS: Damit könnt ihr euch wichtige\n"
	.string "Ressourcen für eure POKéMON\l"
	.string "beschaffen und so euer Team\l"
	.string "verbessern.$"


RocketWarehouse_Text_Vuelta_MisionAtlas4.1:
	.string "Ich hoffe, ihr verschwendet es nicht\n"
	.string "für belanglose Dinge. Ja, mehr Geld\l"
	.string "verschafft euch mehr Möglichkeiten,\l"
	.string "aber das bringt nichts, wenn ihr es\l"
	.string "nicht klug investiert.$"

RocketWarehouse_Text_Vuelta_MisionAtlas5:
	.string "Das hätten wir. Reden wir über die\n"
	.string "Mission. Diese habt ihr, wie schon\l"
	.string "erwähnt, zwar erfolgreich\l"
	.string "abgeschlossen, aber nicht auf die\l"
	.string "optimale Weise.$"

RocketWarehouse_Text_Vuelta_MisionAtlas6:
	.string "Es ist wichtig, dass ihr versteht, dass\n"
	.string "wir hier als eine Einheit fungieren.\p"
	.string "Das macht uns stark. Ihr mögt es als\n"
	.string "Schwäche sehen, aber dem ist nicht so.\p"
	.string "Es ist vielmehr ein Zeichen für\n"
	.string "Intelligenz und das Verständnis, dass\l"
	.string "Zusammenarbeit der Schlüssel zum\l"
	.string "Erfolg ist. Keine große Organisation\l"
	.string "hatte jemals ihren gesamten Erfolg\l"
	.string "ausschließlich einer einzigen Person\l"
	.string "zu verdanken.$"

RocketWarehouse_Text_Vuelta_MisionAtlas7:
	.string "Ich dachte, ich hätte mich klar\n"
	.string "ausgedrückt, als ich euch befohlen\l"
	.string "habe, gemeinsam mit der KONSULIN zu\l"
	.string "verhandeln, um euch gegenseitig den\l"
	.string "Rücken freizuhalten, falls etwas\l"
	.string "schiefgeht.$"

RocketWarehouse_Text_Vuelta_MisionAtlas7.1:
	.string "Was war los, ANDRA? Warum bist du\n"
	.string "alleine reingegangen, anstatt auf\l"
	.string "{PLAYER} zu warten?$"

RocketWarehouse_Text_Vuelta_MisionAtlas8:
	.string "ANDRA: Ich dachte, dass meine\n"
	.string "Fähigkeiten ausreichen würden, HERR\l"
	.string "ATLAS. Ich hatte nicht erwartet, es mit\l"
	.string "einem VOLTILAMM und seinem\l"
	.string "DONNERSCHOCK zu tun zu bekommen.\p"
	.string "Das war mein Fehler.$"

RocketWarehouse_Text_Vuelta_MisionAtlas9:
	.string "ATLAS: {PAUSE 15}…{PAUSE 15} …{PAUSE 15} Du hast Mut und\n"
	.string "Eigeninitiative bewiesen, als du alleine\l"
	.string "gehandelt hast und du hast dir deinen\l"
	.string "Fehler eingestanden.\l"
	.string "Das genügt vorerst. Aber lass das\l"
	.string "dir eine Ehre sein.$"

RocketWarehouse_Text_Vuelta_MisionAtlas10:
	.string "Damit wäre die Sache geklärt.\p"
	.string "Ihr werdet sofort nach KANTO\n"
	.string "aufbrechen.$"
	
RocketWarehouse_Text_Vuelta_MisionAtlas10.1:
	.string "Wir brauchen immer mehr Leute in\n"
	.string "unserem wichtigsten Finanzzentrum.\p"
	.string "Eine Fähre am Hafen erwartet euch\n"
	.string "bereits.$"

RocketWarehouse_Text_Vuelta_MisionAtlas11:
	.string "ARCHER: {PAUSE 20}…{PAUSE 20}…{PAUSE 20}\p"
	.string "Ich möchte nicht, dass ihr diese Insel\n"
	.string "ohne ein kleines Andenken an eure kurze\l"
	.string "Zeit hier verlasst. Vielleicht kehrt ihr\l"
	.string "eines Tages hierher zurück, aber bis es\l"
	.string "so weit ist, wünsche ich, dass ihr diese\l"
	.string "an euch nimmt und gut auf sie Acht gibt.$"

RocketWarehouse_Text_Vuelta_MisionAtlas12:
	.string "{PLAYER} ERHÄLT EIN POKéMON-EI!$"

RocketWarehouse_Text_Vuelta_MisionAtlas13:
	.string "ANDRA ERHÄLT EIN POKéMON-EI!$"

RocketWarehouse_Text_Vuelta_MisionAtlas14:
	.string "ATLAS: Diese beiden Eier enthalten\n"
	.string "wertvolle POKéMON aus der JOHTO Region,\l"
	.string "die hier als Seltenheiten gelten.$"

RocketWarehouse_Text_Vuelta_MisionAtlas14.1:	
	.string "Das ist alles.\p"
	.string "Begebt euch unverzüglich zum Hafen.\p"
	.string "In KANTO wird man euch neue\n"
	.string "Missionen zuteilen.$"

RocketWarehouse_Text_Vuelta_MisionAtlas15:
	.string "ANDRA: SIR, JAWOHL, SIR!$"

RocketWarehouse_Vuelta_MisionAtlas_move1:
walk_up
walk_up
walk_up
walk_right
step_end

RocketWarehouse_Vuelta_MisionAtlas_move2:
walk_in_place_left
step_end

RocketWarehouse_Vuelta_MisionAtlas_move2.1:
delay_8
face_up
delay_16
step_end

RocketWarehouse_Vuelta_MisionAtlas_move3:
walk_slow_down
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_up
walk_in_place_left
step_end

RocketWarehouse_Vuelta_MisionAtlas_move4:
walk_in_place_right
step_end

RocketWarehouse_Vuelta_MisionAtlas_move5:
walk_slow_down
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_up
walk_in_place_left
step_end
