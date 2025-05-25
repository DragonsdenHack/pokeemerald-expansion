RocketHideout_FiveIsland_Meadow_MapScripts::
	.byte 0



RocketHideoutFiveIslanMeadow23English::
lock
faceplayer
msgbox RocketHideoutFiveIslandMeadow_Text_English, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslanMeadow23Spanish::
lock
faceplayer
msgbox RocketHideoutFiveIslandMeadow_Text_Spanish, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslanMeadow22::     
lock     
faceplayer     
msgbox RocketHideoutFiveIslandMeadow_Text_22, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslandMeadow_Text_English:
.string "Text in english.$"

RocketHideoutFiveIslandMeadow_Text_Spanish:
.string "Texto en ingles.$"


RocketHideoutFiveIslandMeadow_Text_22:     
	.string "Kümmere dich um deine Arbeit, Rekrut!\n"
	.string "Die Tätigkeiten, denen wir hier\l"
	.string "nachgehen, sind zu kompliziert für dich!$"



RocketHideoutFiveIslanMeadow21:: 
lock     
faceplayer     
msgbox RocketHideoutFiveIslandMeadow_Text_21, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslandMeadow_Text_21: 
	.string "Genau! Unser EILAND FÜNF Lager verfügt\n"
	.string "über ein geheimes Untergeschoss.\p"
	.string "Unsere Aufgabe ist es, jedes POKéMON\n"
	.string "zu überprüfen, bevor wir sie nach KANTO\l"
	.string "verschicken.$"


RocketHideoutFiveIslanMeadow20:: 
lock     
faceplayer     
msgbox RocketHideoutFiveIslandMeadow_Text_20, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslandMeadow_Text_20: 
 .string "Sei froh! Ab jetzt arbeitest\n"
    .string "du für TEAM ROCKET!$"



RocketHideoutFiveIslanMeadow19:: 
lock     
faceplayer     
msgbox RocketHideoutFiveIslandMeadow_Text_19, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslandMeadow_Text_19: 
	.string "Hast du keine Arbeit zu erledigen?\n"
	.string "Worauf wartest du noch? Du verlierst an\l"
	.string "Effizienz und das dulden wir hier nicht!$"



RocketHideoutFiveIslanMeadow15::
lock     
faceplayer     
msgbox RocketHideoutFiveIslandMeadow_Text_15, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslandMeadow_Text_15:
.string "…{PAUSE 15} …{PAUSE 15}\n"
.string "…{PAUSE 15} …{PAUSE 15}\p"
.string "-Es enthält ein KINGLER.\n"
.string "Besser nicht anfassen…-$"



RocketHideoutFiveIslanMeadow16::
lock
faceplayer
setflag FLAG_SYS_POKEMON_GET
checkitem ITEM_POKE_BALL
goto_if_eq VAR_RESULT, FALSE, Parte2
msgbox MagikarpNo1, MSGBOX_DEFAULT
release
end

Parte2::
checkitem2 ITEM_POKE_BALL
goto_if_eq VAR_RESULT, FALSE, Parte3
msgbox MagikarpNo2, MSGBOX_DEFAULT
release
end 

Parte3::
checkpcitem ITEM_POKE_BALL
goto_if_eq VAR_RESULT, FALSE, Parte4
msgbox MagikarpNo3, MSGBOX_DEFAULT
release
end

Parte4::
checkpcitem2 ITEM_POKE_BALL
goto_if_eq VAR_RESULT, FALSE, Parte5
msgbox MagikarpNo4, MSGBOX_DEFAULT
release
end

Parte5::
msgbox MagikarpSi_Text, MSGBOX_DEFAULT
giveitem ITEM_POKE_BALL
release
end 


MagikarpSi_Text:
.string "Toma una pokeball"
.string "$"

MagikarpNo1:
.string "¡No te doy nada,\n lo tienes en la mochila!$"

MagikarpNo2:
.string "¡No te doy nada,\n lo tienes equipado!$"

MagikarpNo3:
.string "¡No te doy nada,\n lo tienes en pc!$"

MagikarpNo4:
.string "¡No te doy nada,\n lo tienes en pc equipado!$"


RocketHideoutFiveIslanMeadow17::
lock     
faceplayer     
msgbox RocketHideoutFiveIslandMeadow_Text_17, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslandMeadow_Text_17:
.string "…{PAUSE 15} …{PAUSE 15}\n"
.string "…{PAUSE 15} …{PAUSE 15}\p"
.string "-Es enthält ein NIDORINO.\n"
.string "Besser nicht anfassen…-$"




RocketHideoutFiveIslanMeadow12::
lock     
faceplayer     
msgbox RocketHideoutFiveIslandMeadow_Text_12, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslandMeadow_Text_12:
	.string "Nur wenige wissen, dass in Wahrheit\n"
	.string "dieses Lager unsere Hauptquelle für\l"
	.string "das Schmuggeln von POKéMON ist. Wir\l"
	.string "führen hier ebenfalls verschiedene\l"
	.string "Experimente durch, obwohl wir in KANTO\l"
	.string "bessere Labore haben. Auf EILAND FÜNF\l"
	.string "haben wir allerdings sehr interessante\l"
	.string "Erkenntnisse über die Manipulation von\l"
	.string "Radiowellen gewonnen. Zum Beispiel {PAUSE 5} … {PAUSE 5}$"


RocketHideoutFiveIslanMeadow10::
lock     
faceplayer     
msgbox RocketHideoutFiveIslandMeadow_Text_10, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslandMeadow_Text_10: 
	.string "Was für ein Idiot … Es gibt nichts, was\n"
	.string "unseren CHEF-ADIMINISTRATOR mehr\l"
	.string "erzürnt als die Haltung, die aus dem\l"
	.string "Grundsatz des geringsten Aufwands\l"
	.string "resultiert. Hat er allen Ernstes\l"
	.string "erwartet, dass wir ihm einfach so ein\l"
	.string "DRATINI geben? Wir sind eine\l"
	.string "Verbrecherorganisation - nicht die\l"
	.string "Wohlfahrt.$"



RocketHideoutFiveIslandMeadowDocumento_100::
msgbox RocketHideoutFiveIslandMeadowDocumento_Text_100, MSGBOX_SIGN   
end

RocketHideoutFiveIslandMeadowDocumento_Text_100:
.string "T.ROCKETS VERHALTENS- UND MORALKODEX\p"
    .string "1.- Meine Anwesenheit in der Organisation\n"
    .string "ist ein Privileg, kein Recht, und ich\l"
    .string "muss sie mir durch Taten verdienen.{PAUSE 15}\p"
    .string "2.- Loyalität und der volle Einsatz für\n"
    .string "die Organisation sind unabdinglich.{PAUSE 15}\p"
    .string "3.- Ungehorsam und Verrat werden\n"
    .string "mit dem Tod bestraft.{PAUSE 15}\p"
    .string "4.- Wir agieren als eine Einheit. Die\n"
    .string "Einheit steht über der Individualität…{PAUSE 25}\p"
    .string "5.- aber nicht bedeutet, dass nicht jedes\n"
    .string "MITGLIED Eigeninitiative und das\l"
    .string "ständige Streben nach Verbesserung\l"
    .string "haben muss, um ein besserer Trainer\l"
    .string "zu werden.{PAUSE 15}\p"
    .string "6.- Kommt, analysiert, adaptiert\p"
    .string "und gewinnt.{PAUSE 15}\p"
    .string "7.- Jedes Mitglied der Organisation, vom\n"
    .string "neuesten Rekruten bis zum hochrangigsten\l"
    .string "Administrator, zählt. Wir alle ziehen an\l"
    .string "einem Strang und lassen niemanden zurück.$"




RocketHideoutFiveIslandMeadowDocumento_101::
msgbox RocketHideoutFiveIslandMeadowDocumento_Text_101, MSGBOX_SIGN   
end

RocketHideoutFiveIslandMeadowDocumento_Text_101:
.string "…{PAUSE 15} …{PAUSE 15}\n"
.string "…{PAUSE 15} …{PAUSE 15}\p"
.string "-Es enthält ein NIDORINO.\n"
.string "Besser nicht anfassen…-$"




RocketHideoutFiveIslandMeadowDocumento_102::
msgbox RocketHideoutFiveIslandMeadowDocumento_Text_102, MSGBOX_SIGN   
end

RocketHideoutFiveIslandMeadowDocumento_Text_102:
.string "…{PAUSE 15} …{PAUSE 15}\n"
.string "…{PAUSE 15} …{PAUSE 15}\p"
.string "-Es enthält ein RHYHORN.\n"
.string "Besser nicht anfassen…-$"


RocketHideoutFiveIslanMeadowAbajo::     
lock     
faceplayer    
compare VAR_UNUSED_0x40F7, 0
goto_if_gt RocketHideoutFiveIslanMeadowEnd
applymovement OBJ_EVENT_ID_PLAYER, Movement_Abajo
waitmovement 0
msgbox RocketHideoutFiveIslandMeadow_Text_Abajo, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslandMeadow_Text_Abajo:     
	.string "Jeder befindet sich bereits\n"
	.string "an seinem Platz.\l"
	.string "Ich kann jetzt nicht einfach gehen.$"




RocketHideoutFiveIslanMeadowEnd::
release
end


Movement_Abajo:
walk_down
step_end

RocketHideoutFiveIslanMeadowDerecha::     
lock     
faceplayer    
compare VAR_UNUSED_0x40F7, 0
goto_if_gt RocketHideoutFiveIslanMeadowEnd
applymovement OBJ_EVENT_ID_PLAYER, Movement_Derecha
waitmovement 0
msgbox RocketHideoutFiveIslandMeadow_Text_Derecha, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslandMeadow_Text_Derecha:     
	.string "Jeder befindet sich bereits\n"
	.string "an seinem Platz.\l"
	.string "Ich kann jetzt nicht einfach gehen.$"



Movement_Derecha:
walk_right
step_end

RocketHideoutFiveIslanMeadowIzquierda::     
lock     
faceplayer    
compare VAR_UNUSED_0x40F7, 0
goto_if_gt RocketHideoutFiveIslanMeadowEnd
applymovement OBJ_EVENT_ID_PLAYER, Movement_Izquierda
waitmovement 0
msgbox RocketHideoutFiveIslandMeadow_Text_Izquierda, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslandMeadow_Text_Izquierda:     
	.string "Jeder befindet sich bereits\n"
	.string "an seinem Platz.\l"
	.string "Ich kann jetzt nicht einfach gehen.$"




Movement_Izquierda:
walk_left
step_end

RocketHideoutFiveIslandMeadow_Move_1:
walk_in_place_down
step_end

RocketHideoutFiveIslandMeadow_Move_2:
emote_exclamation_mark
step_end

RocketHideoutFiveIslanMeadowAtlas::     
lock     
compare VAR_UNUSED_0x40F7, 0
goto_if_gt RocketHideoutFiveIslanMeadowEnd
special StartWallClock
waitstate  
setvar VAR_UNUSED_0x40F7, 1
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas, MSGBOX_NPC
applymovement 1, Move1
waitmovement 0x0
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas2, MSGBOX_NPC
applymovement 1, Move2
waitmovement 0x0
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas3, MSGBOX_NPC
applymovement 5, Move3
applymovement 1, Move4
waitmovement 0x0
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas4, MSGBOX_NPC
delay 10
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas5, MSGBOX_NPC
playse SE_PIN
applymovement 5, RocketHideoutFiveIslandMeadow_Move_2
waitmovement 0x0
waitse
delay 15
applymovement 1, Move5
waitmovement 0x0
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas6, MSGBOX_NPC
delay 10
applymovement 1, RocketHideoutFiveIslandMeadow_Move_1
waitmovement 0x0
playse SE_BREAKABLE_DOOR
waitse
delay 10
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas6.1, MSGBOX_NPC
delay 10
applymovement 1, Move6
waitmovement 0x0
applymovement 23, Move7
applymovement 22, Move7
waitmovement 0x0
applymovement 5, Move8
playse SE_M_VICEGRIP
waitmovement 0x0
applymovement 23, Move9
applymovement 22, Move9
applymovement 5, Move9
waitmovement 0x0

removeobject 5
playse SE_EXIT
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas7, MSGBOX_NPC
applymovement 1, Move10
waitmovement 0x0
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas8, MSGBOX_NPC
delay 10
applymovement 1, Move11.1
waitmovement 0x0
delay 10
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas8.1, MSGBOX_NPC
delay 10
applymovement 1, Move11.2
waitmovement 0x0
delay 10
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas8.2, MSGBOX_NPC
playse SE_BREAKABLE_DOOR
delay 10
applymovement 1, Move11.3
waitmovement 0x0
waitse
delay 10
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas8.3, MSGBOX_NPC
delay 10
applymovement 1, Move11
waitmovement 0x0
delay 10
playse SE_EXIT
applymovement 23, Move12
applymovement 22, Move12
waitmovement 0x0
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas9, MSGBOX_NPC
delay 15
applymovement 1, Move11.3
waitmovement 0x0
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas9.1, MSGBOX_NPC
delay 15
waitmovement 0x0
applymovement 13, Move13
waitmovement 0x0
applymovement 1, Move11.3
waitmovement 0x0
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas10, MSGBOX_NPC
applymovement 12, Move14
waitmovement 0x0
applymovement 1, Move11.3
waitmovement 0x0
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas11, MSGBOX_NPC
applymovement 10, Move15
waitmovement 0x0
applymovement 1, Move11.3
waitmovement 0x0
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas12, MSGBOX_NPC
applymovement OBJ_EVENT_ID_PLAYER, Move16
waitmovement 0x0
removeobject 2
removeobject 24
removeobject 4
removeobject 5
removeobject 17
removeobject 6
removeobject 8
removeobject 3
applymovement OBJ_EVENT_ID_PLAYER, Move16b
waitmovement 0x0
setflag FLAG_UNUSED_0x26E
setflag FLAG_UNUSED_0x26F
clearflag FLAG_NUEVA_854
release     
end

RocketHideoutFiveIslandMeadow_Text_Atlas:
.string "ATLAS: In Ordnung. Alle sind anwesend.$"



RocketHideoutFiveIslandMeadow_Text_Atlas2:
	.string "Für diejenigen, die es noch nicht\n"
	.string "gemerkt haben. Ihr seid nun Teil von\l"
	.string "TEAM ROCKET - mit allem, was dazu\l"
	.string "gehört. Mein Name ist ATLAS. Ich bin\l"
	.string "GIOVANNIs rechte Hand,\l"
	.string "CHEF-ADMINISTRATOR und leite unsere\l"
	.string "Geschäfte hier in den SEVII EILANDEN {PAUSE 5} …\l"
	.string "{PAUSE 5}$"

RocketHideoutFiveIslandMeadow_Text_Atlas3:
	.string "Die Meisten von euch werden umgehend\n"
	.string "nach KANTO versetzt. Erwartet nicht,\l"
	.string "freundlich von dessen Bewohnern\l"
	.string "behandelt zu werden. Ihr werdet als der\l"
	.string "Abschaum der Region gelten. Indes\l"
	.string "lasst uns euch euer Starter-POKéMON\l"
	.string "übergeben. Ihr gehört zum vierten\l"
	.string "Trupp. Dementsprechend wird jeder ein\l"
	.string "ZUBAT erhalten, welches direkt vom\l"
	.string "Mondberg importiert wurde. Hat jemand\l"
	.string "Fragen?$"

RocketHideoutFiveIslandMeadow_Text_Atlas4:
	.string "REKRUT Nr. 10: S… {PAUSE 25} Sir. Ich konnte nicht\n"
	.string "umhin, all diese mächtigen POKéMON im\l"
	.string "hinteren Teil des Raumes zu bemerken.\l"
	.string "Dabei habe ich mich gefragt, wie unser\l"
	.string "BOSS beabsichtigt, dass wir unsere\l"
	.string "Rolle auf die bestmögliche Weise\l"
	.string "erfüllen, wenn er uns nicht die\l"
	.string "entsprechenden Werkzeuge zur\l"
	.string "Verfügung stellt? Nichts für ungut,\l"
	.string "aber ZUBAT ist nicht gerade das, was\l"
	.string "man unter einem starken Werkzeug\l"
	.string "versteht. Ein NIDOR… {PAUSE 5}$"


RocketHideoutFiveIslandMeadow_Text_Atlas5:
    .string "ATLAS: Genug!$"

RocketHideoutFiveIslandMeadow_Text_Atlas6:
	.string "ATLAS: Mal sehen … {PAUSE 20} Mir kommt da eine\n"
	.string "Idee: Da du die Entscheidungen unseres\l"
	.string "ANFÜHRERS GIOVANNI in Frage gestellt\l"
	.string "hast und offenbar nicht mit unserer\l"
	.string "Verfahrensweise bezüglich neuen\l"
	.string "Rekruten zufrieden bist, gibt es keinen\l"
	.string "Grund, warum du weiterhin Teil dieser\l"
	.string "Organisation sein solltest. {PAUSE 25} … {PAUSE 25} Ich\l"
	.string "hoffe, zu deinem eigenen Wohl versteht\l"
	.string "sich, dass du kein Sterbenswort über\l"
	.string "das verlieren wirst, was du hier gesehen\l"
	.string "hast.$"

RocketHideoutFiveIslandMeadow_Text_Atlas6.1:
	.string "WACHEN!!\p"
	.string "Schafft ihn mir aus den Augen!$"

RocketHideoutFiveIslandMeadow_Text_Atlas7:
	.string "ATLAS: {PAUSE 25} … {PAUSE 25} Das Letzte, was wir in dieser\n"
	.string "Organisation brauchen, sind Schnösel,\l"
	.string "die Privilegien einfordern, bevor sie\l"
	.string "überhaupt etwas bewiesen haben.$"

RocketHideoutFiveIslandMeadow_Text_Atlas8:
	.string "Ein ZUBAT, wenngleich es viele von euch\n"
	.string "als nutzlos erachten mögen, kann zu\l"
	.string "einem der besten POKéMON mutieren,\l"
	.string "wenn man es anständig trainiert.$"
	
RocketHideoutFiveIslandMeadow_Text_Atlas8.1:
	.string "GOLBAT ist ein POKéMON, welches eines\n"
	.string "ROCKET-ADMINISTRATORS würdig ist und\l"
	.string "sogar ein Mitglied der TOP VIER, AGATHE,\l"
	.string "nutzt eins in ihrem Team.$"
	
RocketHideoutFiveIslandMeadow_Text_Atlas8.2:
	.string "Und letztlich IKSBAT: So agil wie ein\n"
	.string "AERODACTYL, widerstandsfähig wie ein\l"
	.string "GEOWAZ und auch tödlich. Es gehört zu\l"
	.string "den fünf besten POKéMON vom Typen\l"
	.string "Gift, die existieren.$"

RocketHideoutFiveIslandMeadow_Text_Atlas8.3:
	.string "Und ihr wollt euch diese Chance\n"
	.string "entgehen lassen, nur weil ihr zuerst den\l"
	.string "Prozess durchlaufen müsst, ein ZUBAT\l"
	.string "zu trainieren?$"

RocketHideoutFiveIslandMeadow_Text_Atlas9:
	.string "Hier werden wir euch das erste Werkzeug\n"
	.string "zur Verfügung stellen, auf dem ihr\l"
	.string "aufbauen könnt. Nur wenn ihr bei Null\l"
	.string "anfängt, könnt ihr Außergewöhnliches\l"
	.string "vollbringen. Das ist es, was GIOVANNI\l"
	.string "erwartet. Beginnen wir nun mit der\l"
	.string "Vergabe eures ZUBATs.$"

RocketHideoutFiveIslandMeadow_Text_Atlas9.1:
    .string "RÜPEL NUMMER 1!!$"

RocketHideoutFiveIslandMeadow_Text_Atlas10:
.string "RÜPEL NUMMER 2!!$"

RocketHideoutFiveIslandMeadow_Text_Atlas11:
.string "RÜPEL NUMMER 3!!$"

RocketHideoutFiveIslandMeadow_Text_Atlas12:
.string "RÜPEL NUMMER 4!!$"

Move1:
walk_slow_up
walk_slow_up
walk_slow_up
delay_16
delay_8
face_left
delay_16
delay_8
face_right
delay_16
delay_8
face_down
delay_16
delay_8
walk_in_place_down
step_end

Move2:
walk_slow_right
delay_16
delay_8
walk_slow_up
delay_16
delay_8
walk_in_place_slow_down
step_end

Move3:
walk_in_place_slow_down
step_end

Move4:
delay_16
walk_in_place_up
delay_8
step_end

Move5:
walk_up
walk_right
walk_right
face_up
step_end

Move6:
walk_left
walk_left
walk_left
face_down
step_end

Move7:
walk_up
walk_up
walk_right
walk_up
walk_up
walk_right
walk_up
walk_up
walk_right
walk_up
face_right
step_end

Move8:
face_Left
delay_4
delay_4
face_right
delay_4
delay_4
jump_in_place_left
step_end

Move9:
delay_1
face_right
delay_2
walk_slow_right
walk_slow_right
walk_slow_right
walk_right
walk_right
walk_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
step_end

Move10:
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_down
face_left
delay_16
face_right
delay_16
walk_in_place_down
delay_16
step_end

Move11.1:
walk_slow_down
delay_8
walk_slow_right
delay_8
walk_slow_down
step_end

Move11.2:
delay_16
face_left
delay_16
delay_8
walk_slow_down
walk_slow_down
delay_16
face_right
delay_16
face_up
step_end

Move11.3:
walk_in_place_up
step_end

Move11:
walk_right
walk_right
face_up
step_end



Move12:
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
walk_left
walk_down
walk_down
walk_left
walk_down
walk_down
walk_left
walk_down
walk_down
face_up
step_end



Move13:
walk_left
walk_down
walk_down
walk_down
walk_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_up
walk_slow_up
walk_slow_up
walk_up
walk_up
walk_up
walk_up
walk_right
face_down
step_end



Move14:
walk_right
walk_down
walk_down
walk_down
walk_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_up
walk_slow_up
walk_slow_up
walk_up
walk_up
walk_up
walk_up
walk_left
face_down
step_end



Move15:
walk_left
walk_down
walk_down
walk_down
walk_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_up
walk_slow_up
walk_slow_up
walk_up
walk_up
walk_up
walk_up
walk_right
face_down
step_end

Move16:
walk_down
walk_down
walk_down
walk_down
step_end

Move16b:
walk_down
walk_down
walk_down
step_end



RocketHideoutFiveIslanMeadowIzquierda2::     
lock     
faceplayer    
compare VAR_UNUSED_0x40F7, 1
goto_if_gt RocketHideoutFiveIslanMeadowEnd
applymovement OBJ_EVENT_ID_PLAYER, Move17
applymovement 1, MoveAbajo
waitmovement 0
msgbox RocketHideoutFiveIslandMeadow_Text_Vuelveatupuesto, MSGBOX_DEFAULT
applymovement 0x1, MoveArriba
applymovement OBJ_EVENT_ID_PLAYER, Movement_Izquierda
waitmovement 0
release     
end

RocketHideoutFiveIslanMeadowDerecha2::     
lock     
faceplayer    
compare VAR_UNUSED_0x40F7, 1
goto_if_gt RocketHideoutFiveIslanMeadowEnd
applymovement OBJ_EVENT_ID_PLAYER, Move17
applymovement 1, MoveAbajo
waitmovement 0
msgbox RocketHideoutFiveIslandMeadow_Text_Vuelveatupuesto, MSGBOX_DEFAULT
applymovement 0x1, MoveArriba
applymovement OBJ_EVENT_ID_PLAYER, Movement_Derecha
waitmovement 0
release     
end

RocketHideoutFiveIslanMeadowAbajo2::     
lock     
faceplayer    
compare VAR_UNUSED_0x40F7, 1
goto_if_gt RocketHideoutFiveIslanMeadowEnd
applymovement OBJ_EVENT_ID_PLAYER, Move17
applymovement 1, MoveAbajo
waitmovement 0
msgbox RocketHideoutFiveIslandMeadow_Text_Vuelveatupuesto, MSGBOX_DEFAULT
applymovement 1, MoveArriba
applymovement OBJ_EVENT_ID_PLAYER, Movement_Abajo
waitmovement 0
release     
end

RocketHideoutFiveIslandMeadow_Text_Vuelveatupuesto:     
	.string "NUMMER 4!! Du stehst noch nicht auf der\n"
	.string "schwarzen Liste und ich hoffe, dass ich\l"
	.string "das nicht schon am ersten Tag ändern\l"
	.string "muss! Nimm deinen Starter, kehre an\l"
	.string "keinen Platz zurück und verschwende\l"
	.string "nicht noch mehr unserer Zeit!$"



Move17:
walk_in_place_up
step_end

MoveAbajo:
face_down
step_end

MoveArriba:
face_up
step_end

MovePostZubat8.1:
delay_16
face_right
step_end


RocketHideoutFiveIslanMeadowZubat::     
lock        
compare VAR_UNUSED_0x40F7, 1
goto_if_gt RocketHideoutFiveIslanMeadowCajaZubat
lock     
setvar VAR_UNUSED_0x40F7, 2
showmonpic SPECIES_ZUBAT, 10, 3  
playmoncry SPECIES_ZUBAT, CRY_MODE_ENCOUNTER 
msgbox Zubat_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Zubat_No
msgbox Zubat_Text_Yes, MSGBOX_DEFAULT
hidemonpic
goto RocketHideoutFiveIslanMeadowPostZubat
release
end

Zubat_No::
msgbox Zubat_Text_No, MSGBOX_DEFAULT
hidemonpic
goto RocketHideoutFiveIslanMeadowPostZubat
release
end

RocketHideoutFiveIslanMeadowPostZubat::
    playfanfare MUS_OBTAIN_TMHM
	msgbox RocketHideoutFiveIslanMeadow_Text_MensajeZubat, MSGBOX_DEFAULT
	givemon SPECIES_ZUBAT, 5, ITEM_NONE
	waitfanfare
	closemessage
	applymovement 1, MovePostZubat1
    applymovement OBJ_EVENT_ID_PLAYER, MovePostZubat2
    waitmovement 0x0
	addobject 7
	removeobject 15
	removeobject 21
	removeobject 9
	removeobject 11
	removeobject 16
	addobject 2
	addobject 24
	addobject 4
	addobject 17
	addobject 6
	addobject 8
	addobject 3

	applymovement OBJ_EVENT_ID_PLAYER, MovePostZubat2b
	waitmovement 0x0
	fadescreen 1
	delay 40
	fadescreen 0
	applymovement OBJ_EVENT_ID_PLAYER, MovePostZubat2.1 
	msgbox RocketHideoutFiveIslanMeadow_Text_PostZubat2 MSGBOX_NPC
	applymovement 1, MovePostZubat3
    waitmovement 0x0
	msgbox RocketHideoutFiveIslanMeadow_Text_PostZubat3 MSGBOX_NPC
	delay 15
	playse SE_BREAKABLE_DOOR
	applymovement 1, Move17
	waitmovement 0x0
	waitse
	delay 10
	msgbox RocketHideoutFiveIslanMeadow_Text_PostZubat3.1 MSGBOX_NPC
	delay 5
	applymovement 3 MovePostZubat4
    applymovement 8 MovePostZubat4
    applymovement 7 MovePostZubat4
    applymovement 6 MovePostZubat4
    applymovement 17 MovePostZubat4
    waitmovement 0x0
	delay 40
	applymovement 2 MovePostZubat5
    applymovement 24 MovePostZubat5
    applymovement 4 MovePostZubat5
    waitmovement 0x0
    delay 40
	applymovement 3 MovePostZubat6
    applymovement 8 MovePostZubat6
    applymovement 7 MovePostZubat6
    applymovement 6 MovePostZubat6
    applymovement 17 MovePostZubat6
    applymovement 2 MovePostZubat6
    applymovement 24 MovePostZubat6
    applymovement 17 MovePostZubat6
	applymovement 4 MovePostZubat6
    waitmovement 0x0
	delay 40
	playse SE_EXIT
    delay 20
    playse SE_EXIT
    delay 20
    playse SE_EXIT
    delay 20
    playse SE_EXIT
    delay 20
    playse SE_EXIT
    delay 20
    playse SE_EXIT
    delay 20
    playse SE_EXIT
    delay 20
    playse SE_EXIT
    delay 20
    playse SE_EXIT
    delay 20
	msgbox RocketHideoutFiveIslanMeadow_Text_PostZubat4 MSGBOX_NPC
	delay 15
	msgbox RocketHideoutFiveIslanMeadow_Text_PostZubat4.1 MSGBOX_NPC
	applymovement 1, MovePostZubat7
    waitmovement 0x0
	playse SE_EXIT
	delay 40
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
	fadescreen 1
	removeobject 1
	removeobject 22
	removeobject 23
	removeobject 2
	removeobject 24
	removeobject 4
	removeobject 3
	removeobject 8
	removeobject 7
	removeobject 6
	removeobject 17
	delay 40
	fadescreen 0
	delay 20
    applymovement 13, MovePostZubat8
	waitmovement 0x0
	applymovement OBJ_EVENT_ID_PLAYER, MovePostZubat8.1
	applymovement 12, MovePostZubat8.1
	applymovement 10, MovePostZubat8.1
	waitmovement 0x0
	msgbox RocketHideoutFiveIslanMeadow_Text_PostZubat5 MSGBOX_AUTOCLOSE
	applymovement 10, MovePostZubat9
	waitmovement 0x0
	msgbox RocketHideoutFiveIslanMeadow_Text_PostZubat6 MSGBOX_AUTOCLOSE
	fadescreen 1
	removeobject 13
	removeobject 10
	removeobject 12
	delay 40
	fadescreen 0
	setflag FLAG_SYS_B_DASH
	setflag FLAG_SYS_POKEMON_GET
	release
	end

Zubat_Text_YesNo:
.string "Du möchtest ZUBAT, das\n"
    .string "PEST-POKÉMON als deinen Starter?$"


Zubat_Text_Yes:
   .string "Es scheint nicht so, als hätte\n"
    .string "dieses POKéMON viel Energie.$"


Zubat_Text_No:
.string "Nein? Ach wie schade, dass kein\n"
    .string "anderes POKÉMON zur Auswahl steht.$"

RocketHideoutFiveIslanMeadow_Text_MensajeZubat:
   .string "{PLAYER} ERHÄLT EIN LEVEL 5 ZUBAT!$"

RocketHideoutFiveIslanMeadow_Text_PostZubat2:
	.string "Gut. Jetzt wo ihr alle ein POKéMON\n"
	.string "besitzt, lasst mich erklären, welche\l"
	.string "Rolle euch in unserer Organisation\l"
	.string "zukommt. Ich werde es kurz machen. Ihr\l"
	.string "seid grundsätzlich diejenigen, die die\l"
	.string "Drecksarbeit erledigen müssen:\l"
	.string "Erpressung, Diebstahl und offene\l"
	.string "Rechnungen begleichen - versteht sich.\l"
	.string "Ihr werdet dafür sorgen, dass sich\l"
	.string "keiner TEAM ROCKET in den Weg stellt\l"
	.string "und so viel Schwarzgeld wie möglich für\l"
	.string "uns beschaffen, welches zur\l"
	.string "Finanzierung unserer Projekte dient.\l"
	.string "Solange ihr nicht das Gegenteil\l"
	.string "beweist, seid ihr für mich und den Rest\l"
	.string "der Welt der unterste Abschaum. Seid\l"
	.string "ihr stattdessen kompetent und führt\l"
	.string "euren Job korrekt aus, erhaltet ihr im\l"
	.string "Gegenzug Respekt, Belohnungen und\l"
	.string "Auszeichnungen. Erst dann und nicht\l"
	.string "früher.$"

RocketHideoutFiveIslanMeadow_Text_PostZubat3:
	.string "Die Rekruten 5-13, in den letzten\n"
	.string "beiden Reihen, werden sofort nach\l"
	.string "Kanto versetzt. Im Hafen von EILAND\l"
	.string "FÜNF wartet bereits ein Schiff auf\l"
	.string "euch. Packt eure Sachen. Das Schiff\l"
	.string "wird in einer Stunde auslaufen.$"

RocketHideoutFiveIslanMeadow_Text_PostZubat3.1:
	.string "Nun geht mir aus den Augen!$"

RocketHideoutFiveIslanMeadow_Text_PostZubat4:
	.string "Jetzt sind noch vier von euch übrig. Es\n"
	.string "ist Tradition, dass wir zumindest einige\l"
	.string "der Rekruten, die wir von EILAND FÜNF\l"
	.string "nach KANTO schicken, für kurze Zeit\l"
	.string "hier behalten. Ihr habt Glück, denn auf\l"
	.string "diese Weise werdet ihr es hinauszögern,\l"
	.string "den Zirkus zu erleben, zu dem KANTO\l"
	.string "verkommen ist.$"

RocketHideoutFiveIslanMeadow_Text_PostZubat4.1:
	.string "Kommt in mein Büro und ich werde euch\n"
	.string "die Einzelheiten für eure Mission geben.\p"
	.string "In der Zwischenzeit könnt ihr euch mit\n"
	.string "eurem neuen POKéMON vertraut machen.\l"
	.string "Die Rekruten im ROCKET-LAGER hier\l"
	.string "werden sich mit Sicherheit freuen,\l"
	.string "gegen euch anzutreten.$"

RocketHideoutFiveIslanMeadow_Text_PostZubat5:
	.string "REKRUT NUMMER 1: Also werden wir eine\n"
	.string "Weile auf EILAND-FÜNF bleiben. Dieser\l"
	.string "ATLAS macht keine halben Sachen.\l"
	.string "Deswegen sagt man, dass nur GIOVANNI\l"
	.string "über ihm steht. Hast du das Gesicht von\l"
	.string "dem Rekruten gesehen, als ATLAS sich\l"
	.string "ihm genähert hat, um ihm zu antworten?\l"
	.string "Ich denke nicht, dass er nach diesem\l"
	.string "Vorfall noch ruhig schlafen kann.$"

RocketHideoutFiveIslanMeadow_Text_PostZubat6:
	.string "REKRUT 3: Ich bezweifle sogar, dass er\n"
	.string "noch am Leben ist. Obwohl er nicht viel\l"
	.string "gesehen hat, war es dennoch genug, um\l"
	.string "bedroht zu werden. Was uns betrifft.\l"
	.string "Wie ATLAS schon gesagt hat, sind wir ab\l"
	.string "jetzt Teil von TEAM ROCKET. Wir sollten\l"
	.string "besser bald in seinem Büro erscheinen\l"
	.string "und herausfinden, was er genau von uns\l"
	.string "möchte. Es gibt nicht gerade viel auf\l"
	.string "dieser Insel zu tun.$"




RocketHideoutFiveIslanMeadowCajaZubat::
   msgbox RocketHideoutFiveIslandMeadow_Text_CajaZubat, MSGBOX_DEFAULT
   release
   end

RocketHideoutFiveIslandMeadow_Text_CajaZubat:
	.string "Das ist die Box, in der ZUBAT aufbewahrt\n"
	.string "wurde, bevor es hierherkam.$"



MovePostZubat1:
 face_up
 step_end

MovePostZubat2:
 walk_up
 walk_up
 walk_up
 step_end

MovePostZubat2b:
walk_up
walk_up
 walk_up
 walk_up
 face_down
 step_end

MovePostZubat3:
walk_slow_left
walk_slow_right
walk_slow_right
walk_slow_left
walk_in_place_up
step_end

MovePostZubat4:
walk_in_place_up
walk_slow_up
face_right
step_end

MovePostZubat5:
walk_in_place_down
walk_slow_down
face_right
step_end

MovePostZubat6:
delay_1
delay_2
delay_4
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end


MovePostZubat7:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_right
walk_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
step_end

MovePostZubat8:
face_left
delay_16
walk_in_place_left
step_end

MovePostZubat9:
delay_16
walk_in_place_right
delay_16
step_end

MovePostZubat2.1:
face_down
walk_in_place_down
step_end

Curacion_Guarida_Rocket::
lock
faceplayer
msgbox Curacion_Curacion_Guarida_Rocket_Texto_1 MSGBOX_AUTOCLOSE
fadescreen 1
playse SE_USE_ITEM
special HealPlayerParty
delay 20
fadescreen 0
msgbox Curacion_Centros_Pokemon_Johto_Texto_2 MSGBOX_AUTOCLOSE
release
end

Curacion_Curacion_Guarida_Rocket_Texto_1:
.string "Willkommen beim ROCKET\n"
	.string "SCHNELLHEILUNGS-CENTER! {PAUSE 5}…{PAUSE 5}$"

