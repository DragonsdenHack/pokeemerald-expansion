PokemonTower_6F_MapScripts::
	.byte 0

PokemonTower6F_1::
end



PokemonTower6F_2::
end



PokemonTower6F_3::
end



PokemonTower6F_4::
end



PokemonTower6F_5::
end



PokemonTower6F_EventScript_Channeler::
	trainerbattle_single TRAINER_SHARON, PokemonTower6F_Text_ChannelerIntro, PokemonTower6F_Text_ChannelerDefeated
	msgbox PokemonTower6F_Text_ChannelerPostBattle, MSGBOX_AUTOCLOSE
	end



PokemonTower6F_EventScript_Channeler2::
	trainerbattle_single TRAINER_BRENDA, PokemonTower6F_Text_Channeler2Intro, PokemonTower6F_Text_Channeler2Defeated
	msgbox PokemonTower6F_Text_Channeler2PostBattle, MSGBOX_AUTOCLOSE
	end



PokemonTower6F_EventScript_Channeler3::
	trainerbattle_single TRAINER_NIKKI, PokemonTower6F_Text_Channeler3Intro, PokemonTower6F_Text_Channeler3Defeated
	msgbox PokemonTower6F_Text_Channeler3PostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_6F_Combate_Fuji::
lock
applymovement 9, PokemonTower_6F_Combate_Fuji_Move_1
waitmovement 0x0
msgbox PokemonTower_6F_Combate_Fuji_Texto_1 MSGBOX_AUTOCLOSE
applymovement 6, PokemonTower_6F_Combate_Fuji_Move_2
waitmovement 0x0
msgbox PokemonTower_6F_Combate_Fuji_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playmoncry SPECIES_CUBONE, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
msgbox PokemonTower_6F_Combate_Fuji_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 6, PokemonTower_6F_Combate_Fuji_Move_2.1
waitmovement 0x0
delay 10
msgbox PokemonTower_6F_Combate_Fuji_Texto_4 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_6F_Combate_Fuji_Move_3
playse SE_PIN
applymovement 8, PokemonTower_6F_Combate_Fuji_Move_4
delay 5
applymovement 9, PokemonTower_6F_Combate_Fuji_Move_4
delay 5
applymovement 10, PokemonTower_6F_Combate_Fuji_Move_4
waitmovement 0x0
waitse
delay 20
msgbox PokemonTower_6F_Combate_Fuji_Texto_5 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 8, PokemonTower_6F_Combate_Fuji_Move_4
delay 5
applymovement 9, PokemonTower_6F_Combate_Fuji_Move_4
delay 5
applymovement 10, PokemonTower_6F_Combate_Fuji_Move_4
waitmovement 0x0
waitse
applymovement 8, PokemonTower_6F_Combate_Fuji_Move_2
delay 5
applymovement 9, PokemonTower_6F_Combate_Fuji_Move_2
delay 5
applymovement 10, PokemonTower_6F_Combate_Fuji_Move_2
delay 5
waitmovement 0x0
msgbox PokemonTower_6F_Combate_Fuji_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, PokemonTower_6F_Combate_Fuji_Move_1
applymovement 9, PokemonTower_6F_Combate_Fuji_Move_5
applymovement 10, PokemonTower_6F_Combate_Fuji_Move_1
waitmovement 0x0
delay 5
applymovement 6, PokemonTower_6F_Combate_Fuji_Move_2
waitmovement 0x0
msgbox PokemonTower_6F_Combate_Fuji_Texto_7 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_6F_Combate_Fuji_Move_6
waitmovement 0x0
msgbox PokemonTower_6F_Combate_Fuji_Texto_8 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_FUJI_1, PokemonTower_6F_Combate_Fuji_Texto_9
delay 15
playse SE_PIN
applymovement 6, PokemonTower_6F_Combate_Fuji_Move_4
waitmovement 0x0
applymovement 6, PokemonTower_6F_Combate_Fuji_Move_7
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_6F_Combate_Fuji_Move_3
waitmovement 0x0
delay 20
playmoncry SPECIES_CUBONE, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
setflag FLAG_HIDE_ROUTE_119_SCOTT
removeobject 7
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_6F_Combate_Fuji_Move_8
waitmovement 0x0
delay 40
playfanfare MUS_OBTAIN_ITEM
msgbox PokemonTower_6F_Combate_Fuji_Texto_10 MSGBOX_DEFAULT
waitfanfare
delay 10
msgbox PokemonTower_6F_Combate_Fuji_Texto_10.1 MSGBOX_DEFAULT
delay 40
playse SE_PIN
applymovement 8, PokemonTower_6F_Combate_Fuji_Move_4
applymovement 9, PokemonTower_6F_Combate_Fuji_Move_4
applymovement 10, PokemonTower_6F_Combate_Fuji_Move_4
waitmovement 0x0
waitse
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
addobject 11
applymovement 11, PokemonTower_6F_Combate_Fuji_Move_9
msgbox PokemonTower_6F_Combate_Fuji_Texto_11 MSGBOX_AUTOCLOSE
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_6F_Combate_Fuji_Move_10
waitmovement 0x0
applymovement 11, PokemonTower_6F_Combate_Fuji_Move_11
waitmovement 0x0
msgbox PokemonTower_6F_Combate_Fuji_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_6F_Combate_Fuji_Texto_12.1 MSGBOX_AUTOCLOSE
playse SE_USE_ITEM
special HealPlayerParty
waitse
delay 20
msgbox PokemonTower_6F_Combate_Fuji_Texto_12.2 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LILYCOVE_MOTEL_SCOTT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
fadescreen 1
delay 20
removeobject 6
removeobject 11
removeobject 8
removeobject 9
removeobject 10
fadescreen 0
setvar VAR_UNUSED_0x40F7, 48
release
end

PokemonTower_6F_Combate_Fuji_Move_2.1:
delay_8
face_left
delay_16
delay_8
face_right
delay_8
step_end

PokemonTower_6F_Combate_Fuji_Texto_1:
	.string "RÜPEL: Du alter Sack bist zu stark!\p"
	.string "Nicht mal wir drei zusammen können\n"
	.string "dich besiegen!$"

PokemonTower_6F_Combate_Fuji_Texto_2:
	.string "MR. FUJI: Ihr Monster! Ihr habt diesem\n"
	.string "TRAGOSSO seine Mutter genommen und\l"
	.string "das alles nur des Geldes wegen!\p"
	.string "Der Schaden ist bereits irreversibel!\p"
	.string "Haut ab, bevor es zu spät ist!$"

PokemonTower_6F_Combate_Fuji_Texto_3:
	.string "RÜPEL: Ach, komm schon! Ist doch die\n"
	.string "Schuld des KNOGGA, dass es sich uns in\l"
	.string "den Weg gestellt hat.\p"
	.string "Sie hat uns gezwungen, sie zu töten!\p"
	.string "Das ist alles!$"

PokemonTower_6F_Combate_Fuji_Texto_4:
	.string "MR. FUJI: Ich verstehe. Nur das\n"
	.string "Ergebnis zählt, nicht wahr?! Nun, wenn\l"
	.string "das so ist, erzähle ich euch, wie es\l"
	.string "jetzt weitergeht! Mein APOLLO wird\l"
	.string "NACHTMAHR gegen euch einsetzen, was\l"
	.string "dazu führen wird, dass ihr all die\l"
	.string "gestohlenen Schädel verliert!\p"
	.string "Das ist wohl der einzige Weg, euch\n"
	.string "zum Nachdenken zu bringen: Indem man\l"
	.string "euch alles nimmt, was ihr als\l"
	.string "wertvoll erachtet!$"

PokemonTower_6F_Combate_Fuji_Texto_5:
	.string "W-warte mal, Opa! Das geht doch zu weit\n"
	.string "{PAUSE 15}…{PAUSE 5}$"

PokemonTower_6F_Combate_Fuji_Texto_6:
.string "RÜPEL: {PLAYER}!!\p"
	.string "Gott sei Dank!$"

PokemonTower_6F_Combate_Fuji_Texto_7:
	.string "MR. FUJI: Wie es scheint, bleibt mir\n"
	.string "keine andere Wahl, als dich zu besiegen,\l"
	.string "wie ich bereits mit deinen Freunden\l"
	.string "getan habe {PAUSE 25}…{PAUSE 25} für die Ruhe dieses Ortes.$"

PokemonTower_6F_Combate_Fuji_Texto_8:
	.string "FUJI: Okay, I have no more option that\n"
	.string "disarm you as I did with your mates…{PAUSE 25} for\l"
	.string "this place's peace.$"

PokemonTower_6F_Combate_Fuji_Texto_9:
	.string "Ich habe dich enttäuscht, TRAGOSSO.\n"
	.string "Bitte vergebe mir {PAUSE 5}…{PAUSE 5}$"

PokemonTower_6F_Combate_Fuji_Texto_10:
	.string "-{PLAYER} übergibt MR. FUJI\n"
	.string "das TRAGOSSO.-$"

PokemonTower_6F_Combate_Fuji_Texto_10.1:
	.string "FUJI: {PAUSE 35}Oh …{PAUSE 35} Dann … {PAUSE 35}, Du {PAUSE 25}…? {PAUSE 25}$"

PokemonTower_6F_Combate_Fuji_Texto_11:
	.string "LANCE: Du wusstest, dass das eines\n"
	.string "Tages passieren würde, FUJI.\p"
	.string "Du kannst der Vergangenheit\n"
	.string "nicht ewig davonlaufen.$"

PokemonTower_6F_Combate_Fuji_Texto_12:
	.string "LANCE: Gute Arbeit, {PLAYER}. Alles\n"
	.string "läuft wie geplant. FUJI und ich werden\l"
	.string "zum obersten Stockwerk gehen, wo wir\l"
	.string "ungestört reden können. Ich vertraue\l"
	.string "darauf, dass du sicherstellt, dass uns\l"
	.string "nicht einmal das kleinste\l"
	.string "Staubkörnchen bei unserem\l"
	.string "Gespräch stört.$"

PokemonTower_6F_Combate_Fuji_Texto_12.1:
	.string "Ich möchte, dass dein Team für diese\n"
	.string "Aufgabe in Topform ist.\p"
	.string "Lass mich deine POKéMON heilen.$"

PokemonTower_6F_Combate_Fuji_Texto_12.2:
    .string "Ich zähle auf dich.$"

PokemonTower_6F_Combate_Fuji_Move_1:
walk_in_place_left
step_end

PokemonTower_6F_Combate_Fuji_Move_2:
walk_in_place_right
step_end

PokemonTower_6F_Combate_Fuji_Move_3:
walk_left
step_end

PokemonTower_6F_Combate_Fuji_Move_4:
emote_exclamation_mark
step_end

PokemonTower_6F_Combate_Fuji_Move_5:
walk_left
walk_up
walk_in_place_down
step_end

PokemonTower_6F_Combate_Fuji_Move_6:
walk_left
walk_left
walk_left
step_end

PokemonTower_6F_Combate_Fuji_Move_7:
walk_up
walk_in_place_down
step_end

PokemonTower_6F_Combate_Fuji_Move_8:
walk_in_place_up
step_end

PokemonTower_6F_Combate_Fuji_Move_9:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
walk_left
walk_left
step_end

PokemonTower_6F_Combate_Fuji_Move_10:
walk_right
walk_right
walk_right
walk_up
walk_in_place_down
step_end

PokemonTower_6F_Combate_Fuji_Move_11:
walk_left
walk_in_place_up
step_end

PokemonTower_6F_Cultistas::
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_3
addobject 12
playse SE_PIN
special HealPlayerParty
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_6F_Cultistas_Move_1
applymovement 12, PokemonTower_6F_Cultistas_Move_2
waitmovement 0x0
msgbox PokemonTower_6F_Cultistas_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonTower_6F_Cultistas_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonTower_6F_Cultistas_Texto_3 MSGBOX_AUTOCLOSE
applymovement 12, PokemonTower_6F_Cultistas_Move_6
waitmovement 0x0
msgbox PokemonTower_6F_Cultistas_Texto_4 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3 
msgbox PokemonTower_6F_Cultistas_Texto_5 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_GRUNT_MUSEUM_2, PokemonTower_6F_Cultistas_Texto_6
msgbox PokemonTower_6F_Cultistas_Texto_7 MSGBOX_AUTOCLOSE
applymovement 12, PokemonTower_6F_Cultistas_Move_2.1
waitmovement 0x0
msgbox PokemonTower_6F_Cultistas_Texto_8 MSGBOX_AUTOCLOSE
applymovement 12, PokemonTower_6F_Cultistas_Move_6
waitmovement 0x0
msgbox PokemonTower_6F_Cultistas_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_6F_Cultistas_Texto_10 MSGBOX_AUTOCLOSE
applymovement 12, PokemonTower_6F_Cultistas_Move_6
waitmovement 0x0
msgbox PokemonTower_6F_Cultistas_Texto_11 MSGBOX_AUTOCLOSE
playse SE_USE_ITEM
special HealPlayerParty
waitse
delay 20
applymovement 12, PokemonTower_6F_Cultistas_Move_2.2
waitmovement 0x0
msgbox PokemonTower_6F_Cultistas_Texto_12 MSGBOX_AUTOCLOSE
delay 10
playse SE_M_FAINT_ATTACK
setflag FLAG_HIDE_ROUTE_119_SCOTT
removeobject 12
waitse
delay 35
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Lavender_Secta_Pasadizo_2_Esencia_Move_8
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 49
release
end

PokemonTower_6F_Cultistas_Move_2.2:
face_left
delay_8
delay_8
walk_in_place_left
step_end

PokemonTower_6F_Cultistas_Move_2.1:
face_up
step_end

PokemonTower_6F_Cultistas_Texto_1:
	.string "????: Du bist also derjenige, der so viel\n"
	.string "Aufruhr an diesem heiligen Ort\l"
	.string "verursacht hat.$"

PokemonTower_6F_Cultistas_Texto_2:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

PokemonTower_6F_Cultistas_Texto_3:
	.string "Hmm {PAUSE 25}…{PAUSE 25} Offengestanden habe ich etwas\n"
	.string "anderes erwartet. Du scheinst nicht an\l"
	.string "dieselben Ketten gebunden zu sein, die\l"
	.string "das Leben der meisten Menschen\l"
	.string "bestimmen.$"

PokemonTower_6F_Cultistas_Texto_4:
	.string "Obgleich die Armseligkeit Kanto\n"
	.string "beherrscht, ist dein Wille ungebrochen.\p"
	.string "Darüber hinaus ist dein Potenzial nicht\n"
	.string "verloren gegangen.$"

PokemonTower_6F_Cultistas_Texto_5:
	.string "Jedoch {PAUSE 25}…{PAUSE 25} gibt es keine Entschuldigung\n"
	.string "für das, was du vorhin angerichtet\l"
	.string "hast. Du wirst dich in einem Kampf\l"
	.string "verantworten müssen.$"

PokemonTower_6F_Cultistas_Texto_6:
	.string "Ich verstehe {PAUSE 25}…{PAUSE 25} Nichts ist so,\n"
	.string "wie es scheint.$"

PokemonTower_6F_Cultistas_Texto_7:
	.string "Deine Handlungen dienen also einem\n"
	.string "höheren Zweck {PAUSE 25}…{PAUSE 25} Das ist nicht das erste\l"
	.string "Mal, dass ich so etwas höre. Aber es ist\l"
	.string "klar, dass du auf einer höheren Sphäre\l"
	.string "der Realität existiert, als ich zunächst\l"
	.string "angenommen habe.$"

PokemonTower_6F_Cultistas_Texto_8:
	.string "Lass mich dir einen Rat geben, junger\n"
	.string "Mann. Bewahre die Essenz, die dich\l"
	.string "definiert, und lass niemanden daran\l"
	.string "rühren.$"

PokemonTower_6F_Cultistas_Texto_9:
	.string "Du bist stark, aber nicht so stark, wie\n"
	.string "du denkst. Du könntest wahre Größe\l"
	.string "erreichen, wenn du weiter dem Weg\l"
	.string "folgst, den dir dein Wille diktiert.$"

PokemonTower_6F_Cultistas_Texto_10:
	.string "Dann und nur dann {PAUSE 25}…{PAUSE 25} wirst du in der Lage\n"
	.string "sein, KANTO und LAVANDIA in ihrem vollen\l"
	.string "Glanz zu erblicken.$"

PokemonTower_6F_Cultistas_Texto_11:
	.string "Diese Welt ist so viel größer als die\n"
	.string "Tyrannen, die KANTO unterjochen. Ich\l"
	.string "hoffe lediglich, dass du lange genug\l"
	.string "leben wirst, um das zu erkennen.\p"
	.string "Lass mich dein POKéMON-Team heilen.$"

PokemonTower_6F_Cultistas_Texto_12:
	.string "Nun setze deinen Weg fort.$"

PokemonTower_6F_Cultistas_Move_1:
emote_exclamation_mark
walk_in_place_left
step_end

PokemonTower_6F_Cultistas_Move_2:
walk_down
walk_down
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
walk_right
walk_in_place_right
step_end

PokemonTower_6F_Cultistas_Move_3:
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
walk_right
walk_in_place_right
step_end

PokemonTower_6F_Cultistas_Move_4:
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
walk_down
walk_down
walk_right
walk_in_place_right
step_end

PokemonTower_6F_Cultistas_Move_5:
walk_in_place_left
step_end

PokemonTower_6F_Cultistas_Move_6:
walk_in_place_right
step_end

PokemonTower_6F_Cultistas_Move_7:
face_left
step_end

PokemonTower_6F_Cultistas_Move_8:
walk_right
step_end

PokemonTower_6F_Combate_Fantasma_Marowak::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_6F_Combate_Fantasma_Marowak_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_6F_Combate_Fantasma_Marowak_Move_2
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
delay 30
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
delay 30
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
delay 30
msgbox PokemonTower_6F_Combate_Fantasma_Marowak_Texto_1 MSGBOX_AUTOCLOSE
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
delay 40
trainerbattle_no_intro TRAINER_GHOST, PokemonTower_6F_Combate_Fantasma_Marowak_Texto_2
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
delay 30
msgbox PokemonTower_6F_Combate_Fantasma_Marowak_Texto_3 MSGBOX_AUTOCLOSE
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
delay 60
playse SE_POKENAV_ON
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_6F_Combate_Fantasma_Marowak_Move_1
waitmovement 0x0
delay 20
msgbox PokemonTower_6F_Combate_Fantasma_Marowak_Texto_4 MSGBOX_AUTOCLOSE
delay 20
playse SE_POKENAV_OFF
setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
setvar VAR_UNUSED_0x40F7, 50
release
end

PokemonTower_6F_Combate_Fantasma_Marowak_Texto_1:
	.string "Du {PAUSE 15}…{PAUSE 15} hast {PAUSE 15}…{PAUSE 15} das {PAUSE 15}…{PAUSE 15} angerichtet {PAUSE 15}…{PAUSE 15}$"

PokemonTower_6F_Combate_Fantasma_Marowak_Texto_2:
.string "…{PAUSE 25} …{PAUSE 25} …{PAUSE 25} …{PAUSE 25}$"

PokemonTower_6F_Combate_Fantasma_Marowak_Texto_3:
	.string "Der Geist dieses KNOGGA ist außer\n"
	.string "Kontrolle und plagt den TURM mit\l"
	.string "GEISTERN!$"

PokemonTower_6F_Combate_Fantasma_Marowak_Texto_4:
.string "BLAU: {PLAYER}!\p"
	.string "ROT hat mich gerade besiegt!\p"
	.string "Verdammt! Ich dachte, dieses Mal würde\n"
	.string "ich ihn fertigmachen! Sag LANCE\l"
	.string "Bescheid und verschwinde dann so\l"
	.string "schnell du kannst!$"

PokemonTower_6F_Combate_Fantasma_Marowak_Move_1:
emote_exclamation_mark
step_end

PokemonTower_6F_Combate_Fantasma_Marowak_Move_2:
walk_in_place_right
walk_in_place_up
walk_in_place_left
walk_in_place_down
step_end
