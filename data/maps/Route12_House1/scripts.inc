Route12_House1_MapScripts::
	.byte 0

Route12House1_1::
end

Route12_House_1_Secundaria_Squirtle::
compare VAR_UNUSED_0x4083, 2
goto_if_gt Route12_House_1_Secundaria_Squirtle_4
compare VAR_UNUSED_0x4083, 2
goto_if_eq Route12_House_1_Secundaria_Squirtle_3
compare VAR_UNUSED_0x4083, 1
goto_if_eq Route12_House_1_Secundaria_Squirtle_2
msgbox Route12_House_1_Secundaria_Squirtle_Texto_1 MSGBOX_SIGN
delay 20
msgbox Route12_House_1_Secundaria_Squirtle_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_1
waitmovement 0x0
msgbox Route12_House_1_Secundaria_Squirtle_Texto_3 MSGBOX_AUTOCLOSE
msgbox Route12_House_1_Secundaria_Squirtle_Texto_9 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route12_House_1_Secundaria_Squirtle_No
msgbox Route12_House_1_Secundaria_Squirtle_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_2
waitmovement 0x0
msgbox Route12_House_1_Secundaria_Squirtle_Texto_11 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_2.1
waitmovement 0x0
delay 10
msgbox Route12_House_1_Secundaria_Squirtle_Texto_11.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Route12_House_1_Secundaria_Squirtle_Texto_11.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_3
waitmovement 0x0
msgbox Route12_House_1_Secundaria_Squirtle_Texto_12 MSGBOX_AUTOCLOSE
delay 10
msgbox Route12_House_1_Secundaria_Squirtle_Texto_12.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Route12_House_1_Secundaria_Squirtle_Texto_12.2 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x4083, 1
release
end

FuchsiaCity_House4_Secundaria_Squirtle_Move_2.1:
delay_8
face_right
delay_16
delay_8
face_player
delay_8
step_end

Route12_House_1_Secundaria_Squirtle_2::
lock
faceplayer
msgbox Route12_House_1_Secundaria_Squirtle_Texto_8 MSGBOX_AUTOCLOSE
release
end

Route12_House_1_Secundaria_Squirtle_3::
lock
faceplayer
delay 20
msgbox Route12_House_1_Secundaria_Squirtle_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_1
waitmovement 0x0
msgbox Route12_House_1_Secundaria_Squirtle_Texto_5 MSGBOX_AUTOCLOSE
delay 10
msgbox Route12_House_1_Secundaria_Squirtle_Texto_5.1 MSGBOX_AUTOCLOSE
delay 10
playfanfare MUS_OBTAIN_TMHM
msgbox Route12_House_1_Secundaria_Squirtle_Texto_6 MSGBOX_DEFAULT
givemon SPECIES_SQUIRTLE, 5, ITEM_NONE
waitfanfare
msgbox Route12_House_1_Secundaria_Squirtle_Texto_7 MSGBOX_AUTOCLOSE
delay 10
msgbox Route12_House_1_Secundaria_Squirtle_Texto_7.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Route12_House_1_Secundaria_Squirtle_Texto_7.2 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x4083, 3
release
end

Route12_House_1_Secundaria_Squirtle_4::
lock
faceplayer
msgbox Route12_House_1_Secundaria_Squirtle_Texto_4 MSGBOX_AUTOCLOSE
release
end


Route12_House_1_Secundaria_Squirtle_No::
msgbox Route12_House_1_Secundaria_Squirtle_Texto_13 MSGBOX_AUTOCLOSE
release
end

Route12_House_1_Secundaria_Squirtle_Texto_1:
	.string "Ich werde niemals so beliebt und\n"
	.string "berühmt sein {PAUSE 15}…{PAUSE 15} Ich muss mir etwas\l"
	.string "einfallen lassen {PAUSE 5}…{PAUSE 5}$"

Route12_House_1_Secundaria_Squirtle_Texto_2:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

Route12_House_1_Secundaria_Squirtle_Texto_3:
	.string "DU! ROCKET! {PAUSE 15}…{PAUSE 15} {PAUSE 15}…{PAUSE 15} Im Gegensatz zu den\n"
	.string "anderen ROCKETs scheinst du wirklich\l"
	.string "was draufzuhaben!$"

Route12_House_1_Secundaria_Squirtle_Texto_4:
	.string "Der Ozean ist so riesig und KANTO ist\n"
	.string "nur von einem kleinen Teil davon\l"
	.string "umgeben. Kannst du dir vorstellen, was\l"
	.string "für POKéMON in den Weiten des Meeres\l"
	.string "existieren?$"

Route12_House_1_Secundaria_Squirtle_Texto_5:
	.string "Wirklich?!! Ich kann's kaum glauben,\n"
	.string "dass du ihn wirklich besiegt hast.\p"
	.string "Seine GARADOS sind unglaublich stark!\p"
	.string "Ich kann dir gar nicht genug danken,\n"
	.string "ROCKET!$"

Route12_House_1_Secundaria_Squirtle_Texto_5.1:
	.string "Diese Niederlage wird für immer ein\n"
	.string "Schandfleck in seiner makellosen\l"
	.string "Karriere sein! Und das kann ich gegen\l"
	.string "ihn nutzen! Hier. Das ist für dich\l"
	.string "ROCKET! Pass gut auf dieses POKéMON\l"
	.string "auf! Es ist unglaublich selten!$"

Route12_House_1_Secundaria_Squirtle_Texto_6:
	.string "DU ERHÄLTST EIN LEVEL 5 SCHIGGY!!$"

Route12_House_1_Secundaria_Squirtle_Texto_7:
	.string "Das ist eines der letzten SCHIGGY, die\n"
	.string "ich von meinem Vater geerbt habe!$"

Route12_House_1_Secundaria_Squirtle_Texto_7.1:
	.string "Es ist ein POKéMON, das in KANTO vom\n"
	.string "Aussterben bedroht ist! Es ist\l"
	.string "unmöglich, draußen einem Wilden über\l"
	.string "den Weg zu laufen! Nur noch wenige von\l"
	.string "ihnen befinden sich im Besitz von\l"
	.string "denjenigen, die schon lange in\l"
	.string "KANTO leben!$"

Route12_House_1_Secundaria_Squirtle_Texto_7.2:
	.string "Seine finale Evolution ist das stärkste\n"
	.string "WASSER-POKéMON, das man in dieser\l"
	.string "Region finden kann! Es ist ein POKéMON,\l"
	.string "das jeden mit seinem bloßen Anblick in\l"
	.string "Staunen versetzen wird, weil es so\l"
	.string "stark und selten ist!$"

Route12_House_1_Secundaria_Squirtle_Texto_8:
	.string "FUCHSANIA CITY ist südwestlich von\n"
	.string "hier. Du musst an den ROUTEN 12, 13, 14,\l"
	.string "15 vorbei, um dorthin zu kommen.\p"
	.string "Trainiere am besten auf diesen ROUTEN,\n"
	.string "bevor du meinen Bruder herausforderst!$"

Route12_House_1_Secundaria_Squirtle_Texto_9:
	.string "Hör mal. Wie wäre es, wenn du was für\n"
	.string "mich tust? Wenn du es schaffst, werde\l"
	.string "ich dir die beste Belohnung geben, die\l"
	.string "dir ein ANGLER in KANTO anbieten kann!$"

Route12_House_1_Secundaria_Squirtle_Texto_10:
	.string "Das ist die richtige Einstellung! Okay {PAUSE 25}…{PAUSE 25}\n"
	.string "Hör zu, ROCKET {PAUSE 25}…{PAUSE 25} Ich habe zwei Brüder.\p"
	.string "Wir drei sind, wie schon unser Vater vor\n"
	.string "uns, zu außergewöhnlichen Anglern\l"
	.string "geworden. Mein jüngerer Bruder lebt in\l"
	.string "ORANIA CITY und hat sich auf die ANGEL\l"
	.string "spezialisiert. Mit ihr kann man nur\l"
	.string "KARPADOR fangen, was eine respektable\l"
	.string "und notwendige Profession ist.\p"
	.string "Denn dank ihm haben viele Trainer die\n"
	.string "Möglichkeit, das furchterregendste\l"
	.string "POKéMON in diesen Gewässern zu fangen!$"

Route12_House_1_Secundaria_Squirtle_Texto_11:
	.string "Mein älterer Bruder und ich fokussieren\n"
	.string "uns eher darauf, nach starken POKéMON\l"
	.string "zu angeln. Wir wetteifern darum, wer die\l"
	.string "Besten fängt und darin liegt das\l"
	.string "Problem {PAUSE 15}…{PAUSE 15} {PAUSE 15}…{PAUSE 15} {PAUSE 15}…{PAUSE 15}$"

Route12_House_1_Secundaria_Squirtle_Texto_11.1:
	.string "Die SUPERANGEL meines älteren Bruders\n"
	.string "hat sich als besser erwiesen, als meine\l"
	.string "PROFIANGEL! Auch sehen ihn viele als\l"
	.string "den besten ANGLER der Region - als den\l"
	.string "mit den besten POKéMON! Er ist in jeder\l"
	.string "Hinsicht besser als ich!$"

Route12_House_1_Secundaria_Squirtle_Texto_11.2:
	.string "Mittlerweile umgibt ihn eine schon\n"
	.string "übernatürliche Aura der\l"
	.string "Unbesiegbarkeit und des Ruhms, die mich\l"
	.string "völlig in den Schatten stellt! Dabei\l"
	.string "weiß ich, dass ich so gut bin wie er!\p"
	.string "Doch keiner wird mich beachten, bis sie\n"
	.string "stehen, dass er auch nur ein Mensch ist\l"
	.string "und besiegt werden kann!$"

Route12_House_1_Secundaria_Squirtle_Texto_12:
	.string "Und hier kommst du ins Spiel, ROCKET.\p"
	.string "Wenn du zu seinem Haus in FUCHSANIA\n"
	.string "CITY gehst und ihn besiegst, wäre das\l"
	.string "ein schwerer Schlag für seinen Ruf.\p"
	.string "Nicht nur, weil er generell verloren\n"
	.string "hätte, sondern weil er gegen einen\l"
	.string "ROCKET verloren hätte. Nichts für\l"
	.string "ungut, aber ihr werdet allgemein,\l"
	.string "neben den KÄFERSAMMLERN, als die\l"
	.string "schwächsten Trainer der Region\l"
	.string "angesehen.$"

Route12_House_1_Secundaria_Squirtle_Texto_12.1:
	.string "Wenn das passieren würde, hätten meine\n"
	.string "PROFIANGEL und ich eine zweite Chance,\l"
	.string "um uns zu beweisen!$"

Route12_House_1_Secundaria_Squirtle_Texto_12.2:
	.string "Das ist also deine Aufgabe, ROCKET!\p"
	.string "Geh nach FUCHSANIA und mache meinen\n"
	.string "Bruder fertig! Dann bekommst du deine\l"
	.string "Belohnung!$"

Route12_House_1_Secundaria_Squirtle_Texto_13:
	.string "Ist das dein Ernst? Kein anderer\n"
	.string "ANGLER der Region kann dir etwas\l"
	.string "Vergleichbares anbieten!\p"
	.string "Überlege es dir nochmal!$"

Route12_House_1_Secundaria_Squirtle_Move_1:
emote_exclamation_mark
face_player
step_end

Route12_House_1_Secundaria_Squirtle_Move_2:
walk_in_place_right
step_end

Route12_House_1_Secundaria_Squirtle_Move_3:
face_player
step_end
