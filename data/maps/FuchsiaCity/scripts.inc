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
	.string "Mein Vater ist der ARENALEITER dieser\n"
	.string "Stadt. Ich trainiere mit Gift-POKéMON,\l"
	.string "genau wie mein Vater.$"



FuchsiaCity12::
lock     
faceplayer     
msgbox Text_12, MSGBOX_DEFAULT
release     
end

Text_12:
	.string "Lass mich in Ruhe, ROCKET.\p"
	.string "Ich bin nicht wegen dir hier!$"


FuchsiaCity14::
lock     
faceplayer     
msgbox Text_14, MSGBOX_DEFAULT
release     
end

Text_14:
	.string "Die SAFARI-ZONE ist der Öffentlichkeit\n"
	.string "zugänglich. Nur zu schade, dass du und\l"
	.string "deine Verbrecherorganisation nicht\l"
	.string "dazu gehören!$"


FuchsiaCity16::
end


FuchsiaCity17::
lock     
faceplayer     
msgbox Text_17, MSGBOX_DEFAULT
release     
end

Text_17:
	.string "Aghh! Also bist du hier, um dich den\n"
	.string "BIKERN von FUCHSANIA anzuschließen!$"


FuchsiaCity18::
lock     
faceplayer     
msgbox Text_18, MSGBOX_DEFAULT
release     
end

Text_18:
	.string "Ein ROCKET wie du wird niemals die\n"
	.string "SAFARI-ZONE betreten dürfen! … … Was?!\p"
	.string "Du willst sie gar nicht betreten und\n"
	.string "hast bereits ein KANGAMA im FELSTUNNEL\l"
	.string "gefangen? Du bist also nicht nur ein\l"
	.string "Dieb, sondern auch noch ein Lügner!\p"
	.string "Es wurde ganz klar bewiesen, dass es\n"
	.string "dort nie ein KANGAMA gab!$"

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
.string "Here there is a note…$"

NeoFuchsiaCityDocumento_Texto_2:
	.string "The position of SAFARI ZONE KEEPER is\n"
	.string "closed until new notice.$"



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
delay 10
msgbox FuchsiaCity_Encuentro_Koga_Texto_1.1 MSGBOX_AUTOCLOSE
delay 20
msgbox FuchsiaCity_Encuentro_Koga_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox FuchsiaCity_Encuentro_Koga_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, FuchsiaCity_Encuentro_Koga_Move_4.1
waitmovement 0x0
delay 10
msgbox FuchsiaCity_Encuentro_Koga_Texto_3.1 MSGBOX_AUTOCLOSE
delay 10
playse MUS_RG_OBTAIN_KEY_ITEM
giveitem ITEM_CONTEST_PASS
waitse
delay 20
msgbox FuchsiaCity_Encuentro_Koga_Texto_4 MSGBOX_AUTOCLOSE
delay 10
msgbox FuchsiaCity_Encuentro_Koga_Texto_4.1 MSGBOX_AUTOCLOSE
delay 10
msgbox FuchsiaCity_Encuentro_Koga_Texto_4.2 MSGBOX_AUTOCLOSE
delay 10
msgbox FuchsiaCity_Encuentro_Koga_Texto_4.3 MSGBOX_AUTOCLOSE
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
delay 10
applymovement 15, FuchsiaCity_Encuentro_Koga_Move_4.4
waitmovement 0x0
delay 10
msgbox FuchsiaCity_Encuentro_Koga_Texto_7.1 MSGBOX_AUTOCLOSE
delay 10
setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_Encuentro_Koga_Move_4.3
applymovement 15, FuchsiaCity_Encuentro_Koga_Move_4.2
waitmovement 0x0
removeobject 15
setvar VAR_UNUSED_0x40F7, 67
release
end

FuchsiaCity_Encuentro_Koga_Move_4.4:
delay_8
face_right
delay_16
delay_8
face_down
delay_8
step_end


FuchsiaCity_Encuentro_Koga_Move_4.3:
delay_16
delay_8
face_down
step_end

FuchsiaCity_Encuentro_Koga_Move_4.2:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end


FuchsiaCity_Encuentro_Koga_Move_4.1:
delay_8
face_up
delay_16
delay_8
face_player
delay_8
step_end

FuchsiaCity_Encuentro_Koga_Texto_1:
	.string "KOGA: {PLAYER}! Ich kann nicht\n"
	.string "glauben, dass du BRUNO wirklich\l"
	.string "vom RADWEG vertrieben hast!$"

FuchsiaCity_Encuentro_Koga_Texto_1.1:
	.string "Du hast keine Ahnung, was du da gerade\n"
	.string "geleistet hast - wie wichtig es ist!\p"
	.string "Aber du kannst dir sicher sein, dass\n"
	.string "ich GIOVANNI sofort davon berichten\l"
	.string "werde!$"

FuchsiaCity_Encuentro_Koga_Texto_2:
.string "{PAUSE 15}…{PAUSE 15}$"

FuchsiaCity_Encuentro_Koga_Texto_3:
	.string "Du hast uns geholfen, das\n"
	.string "SAFARI-Geschäft am Laufen zu halten!\p"
	.string "Und nicht nur das! Dank dir ist die\n"
	.string "Beziehung zwischen TEAM ROCKET und\l"
	.string "den BIKERN besser denn je!$"

FuchsiaCity_Encuentro_Koga_Texto_3.1:
	.string "Du hast dir die größte Belohnung\n"
	.string "verdient, die ich dir geben kann,\l"
	.string "mitsamt meines vollen Respektes!$"

FuchsiaCity_Encuentro_Koga_Texto_4:
	.string "Mit diesem Pass kannst du unsere\n"
	.string "SAFARI-ZONE jederzeit betreten.$"

FuchsiaCity_Encuentro_Koga_Texto_4.1:
	.string "Du musst keinen Eintritt zahlen und\n"
	.string "kannst deine eigenen POKÉBÄLLE ohne\l"
	.string "jegliche Einschränkungen verwenden.\p"
	.string "Nur die Hauptaktionäre und gewisse\n"
	.string "Persönlichkeiten wie BILL haben diese\l"
	.string "Rechte, um unter anderem ihren\l"
	.string "Forschungen nachzugehen …$"

FuchsiaCity_Encuentro_Koga_Texto_4.2:
	.string "Schätze dich glücklich und mach dir\n"
	.string "keine Sorgen wegen deiner Uniform. Sage\l"
	.string "einfach dem Wächter, es sei ein Kostüm,\l"
	.string "mit dem du TEAM ROCKET verspottest.$"

FuchsiaCity_Encuentro_Koga_Texto_4.3:
	.string "Dann wird er dich durchlassen müssen.$"

FuchsiaCity_Encuentro_Koga_Texto_5:
.string "KOGA: WAS?\p"
	.string "Die SEESCHAUMINSELN?$"

FuchsiaCity_Encuentro_Koga_Texto_6:
	.string "Sie befinden sich südwestlich von hier.\n"
	.string "Folge einfach dem Meer südlich von\l"
	.string "FUCHSANIA und du wirst sie finden.\p"
	.string "Du kannst sie gar nicht verfehlen.$"

FuchsiaCity_Encuentro_Koga_Texto_7:
	.string "Nochmal danke für alles, {PLAYER}. Ich\n"
	.string "muss jetzt gehen. Es wäre nicht klug,\l"
	.string "mit einem ROCKET gesehen zu werden. Ich\l"
	.string "muss den Schein wahren, wenn du willst,\l"
	.string "dass einer, der eure Gesinnung teilt,\l"
	.string "weiterhin in einer einflussreichen\l"
	.string "Position bleibt.$"

FuchsiaCity_Encuentro_Koga_Texto_7.1:
	.string "Falls sich die Gelegenheit ergibt {PAUSE 25}…{PAUSE 25}\n"
	.string "würde ich irgendwann gerne gegen dich\n"
	.string "kämpfen.$"

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
delay 10
msgbox FuchsiaCity_Estafado_Texto_3.1 MSGBOX_AUTOCLOSE
delay 10
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
delay 50
hidemoneybox
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
	.string "Ich bin erledigt, völlig ruiniert … Und\n"
	.string "das alles nur wegen diesen Betrügern!$"

FuchsiaCity_Estafado_Texto_2:
.string "…\n"
	.string "{PAUSE 5}…{PAUSE 5}$"

FuchsiaCity_Estafado_Texto_3:
	.string "Hey! Warte ROCKET! Du bist meine letzte\n"
	.string "Hoffnung! Hör mich an!$"

FuchsiaCity_Estafado_Texto_3.1:
	.string "Ich bin Opfer eines Betrugs geworden!\p"
	.string "Ich habe meine letzten Ersparnisse,\n"
	.string "2.000.000¥, in einen echten METEORITEN\l"
	.string "aus den METEORFÄLLEN in HOENN\l"
	.string "investiert. Dieser Meteorit hätte meine\l"
	.string "Theorie bestätigt, auf die mein Projekt\l"
	.string "aufbaut, an dem ich seit Jahren arbeite\l"
	.string "und es zum Abschluss gebracht. Doch\l"
	.string "stattdessen haben mir diese Betrüger,\l"
	.string "zu einem sehr hohen Preis, einen\l"
	.string "gewöhnlichen Stein aus dem MONDBERG\l"
	.string "angedreht! Jetzt bin ich finanziell\l"
	.string "ruiniert und kann nichts dagegen tun!$"

FuchsiaCity_Estafado_Texto_4:
	.string "Was sagst du da?! Du hast diese\n"
	.string "Betrüger fertig gemacht und sie haben\l"
	.string "sich daraufhin in einer anderen Region\l"
	.string "abgesetzt? Und du hast ihnen das Geld\l"
	.string "abgenommen, das ich in mein Projekt\l"
	.string "investiert habe?$"

FuchsiaCity_Estafado_Texto_5:
	.string "-{PLAYER} gibt dem WISSENSCHAFTLER\n"
	.string "seine 2.000.000¥ zurück!-$"

FuchsiaCity_Estafado_Texto_6:
	.string "Ich kann nicht glauben, dass ich\n"
	.string "wirklich mein ganzes Geld wieder habe!\p"
	.string "Ehrlich gesagt war ich mir nicht sicher,\n"
	.string "ob ich dir trauen kann, ROCKET. Ein Teil\l"
	.string "von mir dachte, dass, selbst wenn es dir\l"
	.string "gelingen würde, das Geld\l"
	.string "wiederzubeschaffen, du einfach damit\l"
	.string "verschwinden würdest und es für immer\l"
	.string "verloren wäre.$"

FuchsiaCity_Estafado_Texto_7:
	.string "Jetzt erst sehe ich, dass die\n"
	.string "Vorurteile, was euch angeht, falsch\l"
	.string "sind! Dass all das Geld, das ihr stiehlt,\l"
	.string "wirklich einem Zweck dienen muss! Hier\l"
	.string "ist, was wir vereinbart haben, ROCKET.$"

FuchsiaCity_Estafado_Texto_8:
	.string "-Du erhältst 200.000¥!-$"

FuchsiaCity_Estafado_Texto_9:
	.string "Und hier ist das vereinbarte POKéMON.\p"
	.string "Glaub mir, wenn ich dir sage, dass es\n"
	.string "wirklich schwierig war, dieses POKéMON\l"
	.string "zu fangen, obwohl es sich kaum bewegt\l"
	.string "hat und die Hälfte des Kampfes\l"
	.string "geschlafen hat!$"

FuchsiaCity_Estafado_Texto_10:
	.string "DU ERHÄLTST EIN LEVEL 30 RELAXO!!$"

FuchsiaCity_Estafado_Texto_11:
	.string "Danke für alles, ROCKET! Dank dir kann\n"
	.string "ich mein Projekt endlich abschließen\l"
	.string "und dafür werde ich dir auf ewig\l"
	.string "dankbar sein! Sollte ich eines Tages\l"
	.string "Erfolg haben, werde ich es dich wissen\l"
	.string "lassen!$"

FuchsiaCity_Estafado_Texto_12:
	.string "Vergiss nicht. Sie müssen auf der\n"
	.string "ZINNOBERINSEL sein. Abgesehen von der\l"
	.string "Tatsache, dass sie das größte\l"
	.string "Diebesnest ist, ist sie eine der letzten\l"
	.string "Städte in KANTO, die sie noch nicht\l"
	.string "ausgeraubt haben.$"

FuchsiaCity_Estafado_Texto_13:
	.string "Würdest du bitte versuchen, das Geld\n"
	.string "zurückzuholen, das mir unrechtmäßig\l"
	.string "entwendet wurde? Ich verspreche dir 10\l"
	.string "% der zwei Million zu überlassen, wenn du\l"
	.string "es schaffst! Und nicht nur das!\p"
	.string "Ich werde dir darüber hinaus noch\n"
	.string "ein mächtiges POKéMON als Zeichen\l"
	.string "meiner Dankbarkeit schenken.$"

FuchsiaCity_Estafado_Texto_14:
	.string "Endlich habe ich wieder Hoffnung, mein\n"
	.string "Geld zurückzubekommen! Hör zu, ROCKET.\p"
	.string "Die, die mich um mein Geld betrogen\n"
	.string "haben, sind Profis. Sie wechseln ständig\l"
	.string "ihre Verstecke und die Gebiete, in\l"
	.string "denen sie operieren, damit niemand\l"
	.string "Verdacht schöpft und die Polizei\l"
	.string "ihnen nicht auf die Spur kommt.$"

FuchsiaCity_Estafado_Texto_15:
	.string "Doch ich habe eine Ahnung, wo sie\n"
	.string "stecken könnten! Ich denke, diese\l"
	.string "Gauner halten sich im POKéMON-HAUS auf\l"
	.string "der ZINNOBERINSEL auf. Wenn man\l"
	.string "logisch nachdenkt, ist das der letzte\l"
	.string "Ort, der ihnen noch bleibt. Sie haben\l"
	.string "ihr Ding bereits in FUCHSANIA CITY,\l"
	.string "PRISMANIA und am Fuße des MONDBERGES\l"
	.string "durchgezogen.$"

FuchsiaCity_Estafado_Texto_16:
	.string "Ich hoffe, du bist ein starker TRAINER,\n"
	.string "ROCKET. Sie haben bestimmt mit all dem\l"
	.string "Geld, dass sie sich ergaunert haben, die\l"
	.string "besten POKéMON gekauft, die es auf dem\l"
	.string "Schwarzmarkt für Geld gibt. Wenn du es\l"
	.string "schaffst, mein Geld wiederzubekommen,\l"
	.string "werde ich dir 10 % davon abgeben und ein\l"
	.string "starkes POKéMON schenken, das nur\l"
	.string "schwer zu finden ist! Ich werde hier auf\l"
	.string "dich warten.$"

FuchsiaCity_Estafado_Texto_17:
.string "Oh nein …\p"
	.string "Das darf nicht wahr sein …\p"
	.string "Was soll ich denn jetzt nur tun?$"

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
	.string "Du erhältst einen EXPERTENGURT\n"
	.string "vom KÄFERSAMMLER!$"

FuchsiaCity_Entrenador_Especial_Texto_1:
	.string "Ich kenne bereits jeden Winkel der\n"
	.string "SAFARI-ZONE. Die POKéMON, die dort\l"
	.string "leben, sind mir alle bekannt. Ganz\l"
	.string "ehrlich. Ich glaube, ich bin der\l"
	.string "stärkste KÄFERSAMMLER der ganzen\l"
	.string "Region. POKéMON wie SMETTBO und BIBOR\l"
	.string "sind für mich keine wahren Käfer!\p"
	.string "Findest du nicht auch?$"

FuchsiaCity_Entrenador_Especial_Texto_2:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

FuchsiaCity_Entrenador_Especial_Texto_3:
	.string "Hm. Sieht so aus, als müsstest du noch\n"
	.string "ein bisschen mehr trainieren. Ich\l"
	.string "kämpfe nur gegen außergewöhnliche\l"
	.string "TRAINER. Werde stärker, dann sehen\l"
	.string "wir weiter.$"

FuchsiaCity_Entrenador_Especial_Texto_4:
	.string "Der EXPERTENGURT erhöht den Schaden\n"
	.string "von sehr effektiven Attacken um 20 %,\l"
	.string "was es dem Gegner sehr schwer macht,\l"
	.string "den Angriff einzustecken. Er ist ideal\l"
	.string "für POKéMON mit einer großen Vielfalt\l"
	.string "an Attacken wie STARMIE, ELEKTEK oder\l"
	.string "PINSIR.$"

FuchsiaCity_Entrenador_Especial_Texto_5:
	.string "Ja! Du siehst wie ein außergewöhnlicher\n"
	.string "TRAINER aus! Wenn du mich besiegst,\l"
	.string "wartet eine ganz besondere Belohnung\l"
	.string "auf dich!$"

FuchsiaCity_Entrenador_Especial_Texto_6:
	.string "Also, nimmst du die Herausforderung an?$"

FuchsiaCity_Entrenador_Especial_Texto_7:
	.string "Na dann! Legen wir los!\n"
	.string "Ich hoffe, du enttäuschst mich nicht!$"

FuchsiaCity_Entrenador_Especial_Texto_8:
	.string "Wow! Ich wusste nicht, dass es so\n"
	.string "starke TRAINER gibt!$"

FuchsiaCity_Entrenador_Especial_Texto_9:
	.string "Ah. Du trainierst also für die POKéMON\n"
	.string "LIGA? Kein Wunder, dass du und deine\l"
	.string "POKéMON so stark seid!\p"
	.string "Das hier wird dir bestimmt helfen,\n"
	.string "dein Team noch stärker zu machen!$"

FuchsiaCity_Entrenador_Especial_Texto_10:
	.string "Ein wahrer TRAINER stellt sich jeder\n"
	.string "Herausforderung {PAUSE 5}…{PAUSE 5}$"

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


