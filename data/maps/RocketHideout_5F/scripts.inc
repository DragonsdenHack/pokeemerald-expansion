RocketHideout_5F_MapScripts::
	.byte 0

RocketHideout5F_2::
lock
faceplayer
msgbox RocketHideout5F_2_Texto_1 MSGBOX_AUTOCLOSE
fadescreen 1
playse SE_USE_ITEM
special HealPlayerParty
delay 20
fadescreen 0
msgbox RocketHideout5F_2_Texto_2 MSGBOX_AUTOCLOSE
release
end

RocketHideout5F_2_Texto_1:
	.string "Willkommen beim\n"
	.string "SCHNELL-HEILUNGS-CENTER {PAUSE 5}…{PAUSE 5}$"

RocketHideout5F_2_Texto_2:
	.string "Danke!\p"
	.string "Deine POKéMON sind wieder kampfbereit!$"

end



RocketHideout5F_3::
lock     
faceplayer     
msgbox RocketHideout5F_Text_3, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_3:
	.string "Unsere Absicht ist, dass KANTO uns für\n"
	.string "inkompetente Idioten hält. Kannst dich\l"
	.string "nicht gegen etwas verteidigen, was dir\l"
	.string "nicht bewusst ist.$"



RocketHideout5F_4::
lock     
faceplayer     
msgbox RocketHideout5F_Text_4, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_4:
	.string "GIOVANNI ist der beste Anführer aller\n"
	.string "Zeiten! Er würde TEAM ROCKET niemals\l"
	.string "im Stich lassen!$"



RocketHideout5F_5::
end



RocketHideout5F_6::
end



RocketHideout5F_7::
end



RocketHideout5F_8::
lock     
faceplayer     
msgbox RocketHideout5F_Text_8, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_8:
	.string "Jedes erfolgreiche Geschäft basiert\n"
	.string "auf einem großen Geheimnis, das von der\l"
	.string "Außenwelt verborgen bleibt.\p"
	.string "Dieser Ort hier ist einer unserer\n"
	.string "großen Geheimnisse.$"



RocketHideout5F_9::
lock     
faceplayer     
msgbox RocketHideout5F_Text_9, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_9:
	.string "Du befindest dich jetzt in BEREICH 1\n"
	.string "der eigentlichen PRISMANIA BASIS, wo\l"
	.string "wir beabsichtigen, das größtmögliche\l"
	.string "Potenzial aus jedem NICHT-LEGENDÄREN\l"
	.string "POKéMON rauszuholen, welches manchmal\l"
	.string "ziemlich beeindruckend ist.$"



RocketHideout5F_10::
lock     
faceplayer     
msgbox RocketHideout5F_Text_10, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_10:
	.string "Es wird gesagt, dass Doktor Stephen\n"
	.string "Coveys Buch -Die 7 Wege zur\l"
	.string "Effektivität- GIOVANNI dabei geholfen\l"
	.string "hat, die sichtbare Leistung der\l"
	.string "Organisation um 20 % zu steigern.$"



RocketHideout5F_11::
lock     
faceplayer     
msgbox RocketHideout5F_Text_11, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_11:
	.string "KANTO wirkt derzeit wie eine Parodie der\n"
	.string "großen dystopischen Werke des frühen\l"
	.string "20. Jahrhunderts: -1984- und -Schöne\l"
	.string "neue Welt-. Zwar herrscht in KANTO\l"
	.string "nicht die totale Kontrolle, wie sie\l"
	.string "Orwell in seinem Werk schildert, doch\l"
	.string "gehen die Bürger an ihrer Arbeit\l"
	.string "zugrunde. Was -Schöne neue Welt-\l"
	.string "angeht {PAUSE 25}…{PAUSE 25} so könnte die Illusion der\l"
	.string "POKéMON LIGA und der damit\l"
	.string "einhergehende Traum, CHAMP zu werden,\l"
	.string "als eine moderne Version von Soma\l"
	.string "gesehen werden - als etwas, was\l"
	.string "KANTO bei Verstand hält.$"



RocketHideout5F_13::
end



RocketHideout5F_14::
lock     
faceplayer     
msgbox RocketHideout5F_Text_14, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_14:
	.string "Automatisiere die Übergänge zwischen\n"
	.string "deinen Aufgaben so gut wie möglich.\p"
	.string "Gib den Ablenkungen keine Chance,\n"
	.string "sonst verlierst du dich darin und\l"
	.string "verschwendest viele Stunden am Tag.$"



RocketHideout5F_15::
lock     
faceplayer     
msgbox RocketHideout5F_Text_15, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_15:
	.string "Diejenigen, die herrschen, kennen die\n"
	.string "Regeln erschreckend gut. So sehr es\l"
	.string "auch scheint, dass sie betrügen, ist es\l"
	.string "in Wahrheit noch schlimmer. Sie haben\l"
	.string "die Regeln so gestaltet, dass sie ihnen\l"
	.string "das Betrügen ermöglicht. Die einzige\l"
	.string "Chance ist also ein Staatsstreich.\p"
	.string "Gerechtigkeit ist nur eine Illusion.$"



RocketHideout5F_16::
lock     
faceplayer     
msgbox RocketHideout5F_Text_16, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_16:
	.string "Die Bequemlichkeit fesselt die\n"
	.string "Menschen von KANTO an die Furcht, das\l"
	.string "kleinste bisschen Luxus zu verlieren.\p"
	.string "Deswegen bleiben die Dinge\n"
	.string "unverändert.$"



RocketHideout5F_17::
lock     
faceplayer     
msgbox RocketHideout5F_Text_17, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_17:
	.string "Das letzte Jahrhundert hat uns\n"
	.string "gelehrt, dass eine enorme\l"
	.string "wirtschaftliche Abhängigkeit von der\l"
	.string "Wissenschaft herrscht. Wir akzeptieren\l"
	.string "die Regeln des Spiels, ganz egal wie die\l"
	.string "Lage auch sein mag - und wenn nötig,\l"
	.string "verkaufen wir PORYGON für je 200.000¥.$"



RocketHideout5F_18::
lock     
faceplayer     
msgbox RocketHideout5F_Text_18, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_18:
	.string "Manchmal sind die Gesetze der Natur\n"
	.string "stärker als unser Begehren. TAUBOSS\l"
	.string "gilt als Referenz der KANTO Vögel\l"
	.string "betrachtet werden. Sein Gesamtwert\l"
	.string "beträgt 479 und ist damit der höchste\l"
	.string "unter allen NICHT-LEGENDÄREN. Es muss\l"
	.string "sich über all die Jahre entwickelt\l"
	.string "haben, bis es zu dem großartigen Vogel\l"
	.string "wurde, der er heute ist. Sein maximales\l"
	.string "Potenzial kann er durch die\l"
	.string "MEGA-ENTWICKLUNG erreichen, mit der\l"
	.string "seine Gesamtwerte auf 579 ansteigen.\p"
	.string "Genau ein Punkt unter den legendären\n"
	.string "Vögeln. Zufall? Ich denke nicht. Es ist,\l"
	.string "als würden die legendären POKéMON\l"
	.string "sagen: -Es spielt keine Rolle, wie sehr\l"
	.string "ihr es auch versucht. Ihr werdet uns\l"
	.string "niemals das Wasser reichen können. Wir\l"
	.string "sind die Auserwählten, nicht ihr.-\p"
	.string "Obwohl wir glauben, dass das Potenzial\n"
	.string "eines POKéMON ungeahnte Höhen\l"
	.string "erreichen kann, müssen wir auch\l"
	.string "zugeben, dass vom Universum\l"
	.string "festgelegte Grenzen existieren.$"



RocketHideout5F_19::
lock     
faceplayer     
msgbox RocketHideout5F_Text_19, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_19:
	.string "Laut dem Parkinsonschen Gesetz dehnt\n"
	.string "sich Arbeit genau so weit aus, wie Zeit\l"
	.string "für ihre Erledigung vorhanden ist. Wenn\l"
	.string "dir 12 Stunden zur Verfügung stehen,\l"
	.string "wirst du diese 12 Stunden nutzen; bei 9\l"
	.string "Stunden nutzt du eben diese 9.\p"
	.string "Daher rate ich dir folgendes: Sei dir\n"
	.string "selbst der Nächste, bevor du dich den\l"
	.string "weniger dringenden Aufgaben widmest, die\l"
	.string "zwar Zeit in Anspruch nehmen, aber einen\l"
	.string "bedeutenden Unterschied für dich\l"
	.string "machen können. Auf diese Weise kannst\l"
	.string "du dieses Gesetz zu deinem Vorteil\l"
	.string "nutzen, da es dich dazu zwingt, wichtige\l"
	.string "und dringende Aufgaben gleichzeitig\l"
	.string "anzugehen, mit dem Ziel, effizient zu\l"
	.string "sein. Wenn Menschen gezwungen werden,\l"
	.string "ihre Sinne zu schärfen und an ihre\l"
	.string "Grenzen zu gehen, übertreffen sie oft\l"
	.string "die an sie gestellten Erwartungen.\p"
	.string "Ohne diesen Antrieb gäbe es das\n"
	.string "Parkinsonsche Gesetz nicht.$"



RocketHideout5F_20::
end



RocketHideout5F_21::
lock     
faceplayer     
msgbox RocketHideout5F_Text_21, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_21:
	.string "Schicksal oder Freiheit? Die harte\n"
	.string "Wahrheit ist, dass die Antwort auf\l"
	.string "diese Frage nicht von dir abhängig ist.\p"
	.string "Also halt die Fresse und mache dich\n"
	.string "wieder an die Arbeit! Das ist alles!$"



RocketHideout5F_22::
end



RocketHideout5F_23::
lock     
faceplayer     
msgbox RocketHideout5F_Text_23, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_23:
	.string "SIEGFRIEDs Regierung fühlt sich zu\n"
	.string "sicher und das ist ihre Schwäche.\p"
	.string "Sie ruhen sich auf ihren Lorbeeren\n"
	.string "aus und das wird ihr Untergang.$"



RocketHideout5F_24::
lock     
faceplayer     
msgbox RocketHideout5F_Text_24, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_24:
	.string "Genetik ist das entscheidende Wort.\p"
	.string "Warum ist ein KARPADOR so schwach?\p"
	.string "Warum sind die legendären Vögel so\n"
	.string "stark? Alles dreht sich um die Genetik\l"
	.string "und hier erforschen wir die Grenzen der\l"
	.string "Genetik, um das gesamte mögliche\l"
	.string "Potential der stärksten POKéMON\l"
	.string "dieser Region herauszuholen.$"




RocketHideout5F_25::
lock     
faceplayer     
msgbox RocketHideout5F_Text_25, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_25:
	.string "Dieser Raum war ursprünglich dazu\n"
	.string "gedacht, unseren Fortschritt zu\l"
	.string "überprüfen und neue Ziele festzulegen.\p"
	.string "Jedoch kümmern sich bereits andere\n"
	.string "Abteilungen um diese Aufgaben. Ich\l"
	.string "schätze, das ist das Risiko, das man\l"
	.string "eingeht, wenn man so einen Ort\l"
	.string "erschafft. Je größer er ist, desto mehr\l"
	.string "Platz wird letztlich überflüssig.\p"
	.string "Trotzdem ist es besser den Fehler zu\n"
	.string "machen, zu weit zu gehen, als nicht\l"
	.string "genug zu erreichen.$"



RocketHideout5F_26::
end



RocketHideout5F_27::
lock     
faceplayer     
msgbox RocketHideout5F_Text_27, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_27:
	.string "Du wirst nicht vielen Trainern mit\n"
	.string "POKéMON wie PINSIR, SICHLOR, TAUROS,\l"
	.string "KANGAMA oder den EVOLI-Evolutionen\l"
	.string "begegnen. Sämtliche dieser POKéMON\l"
	.string "gelten als stark und selten.\p"
	.string "Nur die ersten vier der Genannten sind\n"
	.string "in der SAFARI-ZONE fangbar, was teil-\l"
	.string "weise der Grund für ihren Erfolg ist.$"



RocketHideout5F_28::
lock     
faceplayer     
msgbox RocketHideout5F_Text_28, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_28:
	.string "Die Erwartung, die Gefühle, der\n"
	.string "Optimismus, die Planung und die großen\l"
	.string "Zukunftspläne, die man hier wahrnimmt,\l"
	.string "sind einzigartig. Spürst du es nicht?\p"
	.string "Verbringe eine Woche hier und du wirst\n"
	.string "absolut davon überzeugt sein, dass du\l"
	.string "alles erreichen kannst, was du dir\l"
	.string "vornimmst.$"



RocketHideout5F_29::
lock     
faceplayer     
msgbox RocketHideout5F_Text_29, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_29:
	.string "Jemand sagte einst, dass Besessenheit\n"
	.string "das Wort sei, mit dem faule Menschen die\l"
	.string "Hingebungsvollen beschreiben.\p"
	.string "Es ist beinahe eine Tatsache, dass man,\n"
	.string "sobald man in etwas mehr oder weniger\l"
	.string "hervorsticht, von anderen als besessen\l"
	.string "betrachtet wird. Aber wo liegt der\l"
	.string "Fehler in dem Verlangen, seine Grenzen\l"
	.string "in einem bestimmten Bereich ausreizen\l"
	.string "zu wollen? Das zu tun, könnte einen\l"
	.string "stärker machen und ein besseres\l"
	.string "Verständnis für die Gesetze verleihen,\l"
	.string "die diese Welt bestimmen.$"



RocketHideout5F_30::
lock     
faceplayer     
msgbox RocketHideout5F_Text_30, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_30:
	.string "Wir setzen hier zwar auf ständigen und\n"
	.string "allmählichen Fortschritt, doch\l"
	.string "erkennen wir auch das unvergleichbare\l"
	.string "Potential von Intuition und\l"
	.string "Spontanität an. Man muss sich nur einen\l"
	.string "Athleten im berüchtigsten sogenannten\l"
	.string "-Flow-Zustand- ansehen. In diesem kann\l"
	.string "er fünf Tore in zehn Minuten schießen\l"
	.string "oder einen elfmaligen Champ mit 7:0\l"
	.string "vernichten. Die Kontrolle über die\l"
	.string "komplexen Variablen, die diesen Zustand\l"
	.string "ermöglichen, ist äußerst schwierig.\p"
	.string "Doch wenn es uns gelänge, diesen\n"
	.string "Zustand über längere Zeit\l"
	.string "aufrechtzuerhalten, könnten wir\l"
	.string "nahezu 100 % des menschlichen\l"
	.string "Potenzials entfesseln.$"



RocketHideout5F_31::
end



RocketHideout5F_32::
lock     
faceplayer     
msgbox RocketHideout5F_Text_32, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_32:
	.string "Nur wenige wissen, dass TEAM ROCKET\n"
	.string "nicht von GIOVANNI, sondern von seiner\l"
	.string "Mutter, MADAME BOSS, gegründet wurde.\p"
	.string "Sie ist die ursprüngliche Gründerin,\n"
	.string "die 1975 all ihre Energie darauf\l"
	.string "konzentriert hat, das legendäre MEW zu\l"
	.string "fangen, der Urahn aller POKéMON.\p"
	.string "Wenn sie nur sehen könnte, wie weit\n"
	.string "wir gekommen sind {PAUSE 5}…{PAUSE 5}$"



RocketHideout5F_33::
lock     
faceplayer     
msgbox RocketHideout5F_Text_33, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_33:
	.string "Draußen verzerrt sich die Realität auf\n"
	.string "so viele mögliche Arten und Weisen und\l"
	.string "es ist verständlich, warum es passiert.\p"
	.string "In der Politik und Religion können zwei\n"
	.string "und zwei fünf ergeben. Aber hier ist das\l"
	.string "unmöglich. Du kannst die physischen\l"
	.string "Fakten nicht ignorieren und auch nicht\l"
	.string "die Naturgesetze täuschen. Wenn du die\l"
	.string "Effizienz eines POKéMON optimieren\l"
	.string "oder die beste Verteilung der\l"
	.string "STATUSWERTE herausfinden willst,\l"
	.string "müssen zwei plus zwei vier ergeben.$"



RocketHideout5F_34::
lock     
faceplayer     
msgbox RocketHideout5F_Text_34, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_34:
	.string "Warum sind uns die Ergebnisse und\n"
	.string "Zahlen so wichtig? Wir sind der\l"
	.string "Überzeugung, dass alles, von dieser\l"
	.string "Stadt bis hin zur gesamten Region,\l"
	.string "einschließlich der Jahreszeiten, des\l"
	.string "Zeitflusses und des Lebens selbst,\l"
	.string "genau dafür existiert - damit wir sehen\l"
	.string "können, was wir damit anstellen, welche\l"
	.string "Veränderungen wir umsetzen und wie\l"
	.string "weit wir das Potenzial all dieser\l"
	.string "natürlichen Gesetze ausschöpfen\l"
	.string "können. Erkennbaren Fortschritt in\l"
	.string "einem angemessenen Zeitraum zu\l"
	.string "erreichen, ist eines der Hauptziele,\l"
	.string "durch das wir uns mit dem verbinden\l"
	.string "können, was viele in LAVANDIA als -die\l"
	.string "Essenz- bezeichnen.\p"
	.string "Das wird uns helfen, die Umwelt, die\n"
	.string "wir sehen, mehr schätzen zu lernen und\l"
	.string "um dies zu erreichen, müssen wir häufig\l"
	.string "Auswertungen und Forschungen\l"
	.string "durchführen.\p"
	.string "Zahlen sind dabei unerlässlich.$"



RocketHideout5F_35::
lock     
faceplayer     
msgbox RocketHideout5F_Text_35, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_35:
	.string "Heutzutage ist die Wettbewer-\n"
	.string "bsfähigkeit von komplexer Natur.\p"
	.string "In der Geschichte wird es niemals\n"
	.string "wieder einen Sektor geben, in dem\l"
	.string "alleine die Teilnahme ausreicht, um ein\l"
	.string "erfolgreiches Unternehmen aufzubauen.$"



RocketHideout5F_36::
lock
faceplayer     
msgbox RocketHideout5F_Text_36, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_36:
	.string "Macht korrumpiert, und absolute\n"
	.string "macht korrumpiert absolut.$"

RocketHideout5F_Text_36.1:
.string "Sosténlo durante un año, y mejorarás\n"
.string "24 KG; si ya levantabas 130 KG, de 130 KG\l"
.string "a 154, la diferencia es muy notable.\l"
.string "Ahora parece más dificil, ¿eh?$"

RocketHideout5F_Text_36.2:
.string "Pero si realizas unos 10 entrenamientos\n"
.string "al mes, puedes ver cada uno de ellos\l"
.string "como una oportunidad única para\l"
.string "construir y materializar esos 2 KG.$"

RocketHideout5F_Text_36.3:
.string "Desde esa perspectiva, psicológicamente\n"
.string "da la impresión de que pueda progresarse\l"
.string "hasta el infinito, aunque llegado a\l"
.string "cierto punto, los límites golpean duro{PAUSE 5}…{PAUSE 5}$"



RocketHideout5F_37::
lock     
faceplayer     
msgbox RocketHideout5F_Text_37, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_37:
	.string "Muahahahahahahaha! Witzig, wie wir ca.\p"
	.string "40 Meter unter der Erde sind, aber\n"
	.string "trotzdem PRISMANIA CITY unter unserer\l"
	.string "Kontrolle haben.\p"
	.string "Von hier aus werden wir alles lenken!$"



RocketHideout5F_38::
lock     
faceplayer     
msgbox RocketHideout5F_Text_38, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_38:
	.string "Die Vergangenheit vergisst nichts, ob\n"
	.string "es nun Segen oder Fluch ist.\p"
	.string "Deine vergangenen Taten können nicht\n"
	.string "rückgängig gemacht werden. Sie bleiben\l"
	.string "für alle Ewigkeit bestehen, unberührt\l"
	.string "vom Lauf der Zeit {PAUSE 25}…{PAUSE 25} und das ist\l"
	.string "ebenfalls eine Form von\l"
	.string "Unsterblichkeit.$"



RocketHideout5F_39::
lock     
faceplayer     
msgbox RocketHideout5F_Text_39, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_39:
	.string "Einige sagen, dass Denken umsonst sei.\n"
	.string "Wie ironisch. Für die Bewohner von KANTO\l"
	.string "wird es allerdings immer teurer, nicht zu\l"
	.string "denken!$"



RocketHideout5F_40::
lock     
faceplayer     
msgbox RocketHideout5F_Text_40, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_40:
	.string "Dein Team weist einige Mängel auf. Ich\n"
	.string "sehe so etwas. Aber ich muss zugeben,\l"
	.string "dass dein Team angesichts deiner Mittel\l"
	.string "viel besser als das dieses Abschaums\l"
	.string "ist, das auf den Routen und in den\l"
	.string "weniger beeindruckenden Städten\l"
	.string "herumlungert und sich selber Trainer\l"
	.string "nennen. Die besten Trainer der Region\l"
	.string "wissen sich gut zu verstecken.$"



RocketHideout5F_41::
end



RocketHideout5F_42::
lock     
faceplayer     
msgbox RocketHideout5F_Text_42, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_42:
	.string "NIDOKING und NIDOQUEEN gehören zu den\n"
	.string "am meisten geschätzten POKéMON in\l"
	.string "unserer Organisation. Wenn du einen von\l"
	.string "beiden hast, wird dich jeder in der\l"
	.string "Organisation respektieren.$"



RocketHideout5F_43::
lock     
faceplayer     
msgbox RocketHideout5F_Text_43, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_43:
	.string "Der Brunnen verkörpert Stärke,\n"
	.string "Überfluss an Ressourcen und unseren\l"
	.string "Platz in der Hierarchie. Niemand kann\l"
	.string "TEAM ROCKET besiegen.\p"
	.string "Deswegen haben wir einen bauen lassen,\n"
	.string "der anderthalbmal so groß ist wie\l"
	.string "der von der SILPH COMPANY.$"



RocketHideout5F_44::
lock     
faceplayer     
msgbox RocketHideout5F_Text_44, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_44:
	.string "Dieser Ort ist ein Beispiel für das\n"
	.string "Potential der Wissenschaft. Wie bitte?\p"
	.string "Wir verlieren an Leistung, Kapazität\n"
	.string "und schaden unserer Gesundheit, wenn\l"
	.string "wir von der Natur getrennt sind? Kein\l"
	.string "Problem. Wir bringen die Natur einfach\l"
	.string "in unsere Büros.\p"
	.string "GOTT SEGNE GIOVANNI!$"



RocketHideout5F_45::
lock     
faceplayer     
msgbox RocketHideout5F_Text_45, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_45:
	.string "SILPHS PRÄSIDENT und GIOVANNI waren\n"
	.string "stets erbitterte Rivalen. Wenn die\l"
	.string "SILPH COMPANY von unserem Brunnen\l"
	.string "wüsste, würden sie einen noch Größeren\l"
	.string "bauen und auf ihrem Dach zur Schau\l"
	.string "stellen. Einfach, um sich überlegen\l"
	.string "zu fühlen {PAUSE 5}...{PAUSE 5}$"



RocketHideout5F_46::
end



RocketHideout5F_47::
lock     
faceplayer     
msgbox RocketHideout5F_Text_47, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_47:
	.string "Der Preis der Items, welche die\n"
	.string "Basispunkte (FP) eines POKéMON\l"
	.string "steigern (Protein, Eisen …) und der\l"
	.string "Preisunterschied zwischen hier und der\l"
	.string "Außenwelt lässt sich folgendermaßen\l"
	.string "zusammenfassen: Dieser Ort bietet\l"
	.string "Einrichtungen für Elitesoldaten, um das\l"
	.string "Beste aus ihnen herauszuholen, während\l"
	.string "draußen alle Arten von Hindernissen für\l"
	.string "den durchschnittlichen Trainer\l"
	.string "aufgebaut werden, der sich diese\l"
	.string "abnormalen Preise nicht leisten kann.\p"
	.string "Dennoch gilt, dass, wenn du deine\n"
	.string "POKéMON richtig trainierst, du diese\l"
	.string "Items auf lange Sicht nicht benötigen\l"
	.string "wirst, obwohl sie nützlich sind, um\l"
	.string "bestimmte Werte gezielt zu steigern.$"



RocketHideout5F_48::
end



RocketHideout5F_49::
end



RocketHideout5F_50::
lock     
faceplayer     
msgbox RocketHideout5F_Text_50, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_50:
	.string "Tatsache ist, dass unsere Region\n"
	.string "nichts besonderes ist. Viele glauben,\l"
	.string "dass wir die besten POKéMON haben.\p"
	.string "Andere sind der Ansicht, dass nur 150\n"
	.string "Arten aus KANTO stammen. Aber die\l"
	.string "Wahrheit ist, dass andere Regionen\l"
	.string "POKéMON besitzen, die weitaus stärker\l"
	.string "sind, als man es sich hier in KANTO\l"
	.string "vorstellen kann. Einige, wie HOENN haben\l"
	.string "zwei Pseudo-Legendäre. JOHTO hat\l"
	.string "LUGIA und HO-OH, die beide jeweils eine\l"
	.string "Macht besitzen, wie sie hier noch nie\l"
	.string "gesehen wurden. Für HOENN gilt das\l"
	.string "Gleiche. Hier jedoch ist unser einziges\l"
	.string "Pseudo-Legendäre POKéMON DRAGORAN\l"
	.string "und was die Legendären angeht, bildet\l"
	.string "MEW mit seinen 600 Statuswerten die\l"
	.string "obere Grenze. Die einzige Waffe, die\l"
	.string "KANTO nutzen kann, um mit den anderen\l"
	.string "Regionen zu konkurrieren, ist\l"
	.string "Technologie {PAUSE 5}…{PAUSE 5}$"



RocketHideout5F_51::
lock     
faceplayer     
msgbox RocketHideout5F_Text_51, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_51:
	.string "Auf diesem Tisch befinden sich die\n"
	.string "wichtigsten Daten der 15 mächtigsten\l"
	.string "nicht-legendären POKéMON dieser\l"
	.string "Region. Es ist sehr wichtig,\l"
	.string "Informationen über sämtliche\l"
	.string "verfügbaren Werkzeuge zu haben -\l"
	.string "sowohl für dich als auch für deinen\l"
	.string "Gegner.\p"
	.string "Denkst du nicht auch?$"



RocketHideout5F_52::
lock     
faceplayer     
msgbox RocketHideout5F_Text_52, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_52:
	.string "Idioten! Sie dachten, sie könnten uns\n"
	.string "auf die standardmäßigen\l"
	.string "Heilungsdienste reduzieren.\p"
	.string "Dabei haben wir ein System an Ressourcen,\n"
	.string "die zehnmal besser sind, als die\l"
	.string "lächerlichen öffentlichen Märkte! Na\l"
	.string "los, Rüpel! Hier bist du zu Hause!\p"
	.string "Nirgendwo sonst wirst du eine größere\n"
	.string "Auswahl an Produkten zu besseren\l"
	.string "Preisen finden! Muahahahaha!\p"
	.string "LANG LEBE GIOVANNI!$"



RocketHideout5F_53::
lock     
faceplayer     
msgbox RocketHideout5F_Text_53, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_53:
	.string "Du wirst nicht vielen Trainern mit\n"
	.string "POKéMON wie PINSIR, SICHLOR, TAUROS,\l"
	.string "KANGAMA oder den EVOLI Evolutionen\l"
	.string "begegnen. Sämtliche dieser POKéMON\l"
	.string "gelten als stark und selten. Nur die\l"
	.string "ersten vier der Genannten sind in der\l"
	.string "SAFARI-ZONE fangbar, was teilweise der\l"
	.string "Grund für ihren Erfolg ist.$"



RocketHideout5F_54::
lock     
faceplayer     
msgbox RocketHideout5F_Text_54, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_54:
	.string "Furcht ist des Fortschritts\n"
	.string "größter Feind, Kumpel.$"



RocketHideout5F_55::
lock     
faceplayer     
msgbox RocketHideout5F_Text_55, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_55:
	.string "Wir haben es wirklich gut hinbekommen.\n"
	.string "Diese reichen Pinkel, die durch das\l"
	.string "PRISMANIA-EINKAUFSZENTRUM\l"
	.string "schlendern und denken, dass sie\l"
	.string "exklusive Produkte kaufen, haben keine\l"
	.string "Ahnung, was wir hier haben. Behaltet\l"
	.string "eure Geschäfte. Wir brauchen sie nicht!$"



RocketHideout5F_56::
lock     
faceplayer     
msgbox RocketHideout5F_Text_56, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_56:
	.string "Die Meisten würden durchdrehen, wenn\n"
	.string "sie wüssten, was wir hier wirklich\l"
	.string "treiben.$"



RocketHideout5F_57::
lock     
faceplayer     
msgbox RocketHideout5F_Text_57, MSGBOX_DEFAULT
release     
end

RocketHideout5F_Text_57:
	.string "KOKOWEI und KINGLER sind zwei POKéMON\n"
	.string "mit beeindruckenden Statuswerten, die\l"
	.string "für gewöhnlich von den\l"
	.string "durchschnittlichen Trainern ignoriert\l"
	.string "werden. Keiner würde denken, dass\l"
	.string "KINGLER einen ANGRIFF von 130 oder\l"
	.string "KOKOWEI einen 125 SPEZIAL-ANGRIFF\l"
	.string "besitzt. Das würde viele überraschen.$"

RocketHideout5F_61::
lock         
msgbox RocketHideout5F_Text_61, MSGBOX_SIGN
release     
end

RocketHideout5F_Text_61:
.string "JOHTO$"

RocketHideout5F_62::
lock         
msgbox RocketHideout5F_Text_62, MSGBOX_SIGN
release     
end

RocketHideout5F_Text_62:
.string "HOENN$"



RocketHideout5FDocumento_100::
lock     
showmonpic SPECIES_FLAREON, 10, 3   
playmoncry SPECIES_FLAREON, CRY_MODE_ENCOUNTER
msgbox RocketHideout5FDocumento_Text_100, MSGBOX_DEFAULT
hidemonpic
release     
end

RocketHideout5FDocumento_Text_100:
.string "NUMMER 15: FLAMARA\p"
.string "KRAFTPUNKTE: 65\n"
.string "ANGRIFF: 130\l"
.string "VERTEIDIGUNG: 60\l"
.string "SPEZIAL-ANGRIFF: 95\l"
.string "SPEZIAL-VERTEIDIGUNG: 110\l"
.string "INITIATIVE: 65\l"
.string "INSGESAMT: 525\p"
	.string "Die entwickelte Form von EVOLI, die eine\n"
	.string "weniger effiziente Verteilung von\l"
	.string "Statuswerten besitzt.\p"
	.string "Nichtsdestotrotz wird ein Flammenblitz\n"
	.string "dieses POKéMON, dass durch die\l"
	.string "Fähigkeit Adrenalin verstärkt wird,\l"
	.string "alles verbrennen, was es berührt. Es\l"
	.string "kommt nicht in der Wildnis vor. Um es zu\l"
	.string "erhalten, muss man ein EVOLI entwickeln\l"
	.string "- ein POKéMON, zu dem nur die Elite\l"
	.string "dieser Region Zugriff hat.$"


RocketHideout5FDocumento_101::
lock     
showmonpic SPECIES_VAPOREON, 10, 3   
playmoncry SPECIES_VAPOREON, CRY_MODE_ENCOUNTER
msgbox RocketHideout5FDocumento_Text_101, MSGBOX_DEFAULT
hidemonpic
release     
end

RocketHideout5FDocumento_Text_101:
.string "NUMMER 14: AQUANA\p"
.string "KRAFTPUNKTE: 130\n"
.string "ANGRIFF: 65\l"
.string "VERTEIDIGUNG: 60\l"
.string "SPEZIAL-ANGRIFF: 110\l"
.string "SPEZIAL-VERTEIDIGUNG: 95\l"
.string "INITIATIVE: 65\l"
.string "INSGESAMT: 525\p"
	.string "Die ausgewogenste Form von EVOLI, dazu\n"
	.string "fähig jeden Schlag einzustecken und\l"
	.string "mit der mächtigsten Hydropumpe der\l"
	.string "Region anzugreifen, die nur vom\l"
	.string "Fossil-POKéMON AMOROSO übertroffen\l"
	.string "wird. Es kommt nicht in der Wildnis vor.\p"
	.string "Um es zu erhalten, muss man ein EVOLI\n"
	.string "entwickeln - ein POKéMON, zu dem nur die\l"
	.string "Elite dieser Region Zugriff hat.$"


RocketHideout5FDocumento_102::
lock     
showmonpic SPECIES_JOLTEON, 10, 3  
playmoncry SPECIES_JOLTEON, CRY_MODE_ENCOUNTER 
msgbox RocketHideout5FDocumento_Text_102, MSGBOX_DEFAULT
hidemonpic
release     
end

RocketHideout5FDocumento_Text_102:
.string "NUMMER 13: BLITZA\p"
.string "KRAFTPUNKTE: 65\n"
.string "ANGRIFF: 65\l"
.string "VERTEIDIGUNG: 60\l"
.string "SPEZIAL-ANGRIFF: 110\l"
.string "SPEZIAL-VERTEIDIGUNG: 95\l"
.string "INITIATIVE: 130\l"
.string "INSGESAMT: 525\p"
	.string "KANTOs Donnerblitz, ausgerüstet mit\n"
	.string "einem außergewöhnlich hohen\l"
	.string "Spezial-Angriff. Seine Initiative wird\l"
	.string "nur von LEKTROBALL übertroffen. Mit\l"
	.string "diesen Eigenschaften ist es die beste\l"
	.string "Wahl gegen Flug- und Wassertypen,\l"
	.string "obgleich es ihm an Vielseitigkeit\l"
	.string "bezüglich seiner Attacken mangelt.\p"
	.string "Es kommt nicht in der Wildnis vor.\p"
	.string "Um es zu erhalten, muss man ein EVOLI\n"
	.string "entwickeln, ein POKéMON, zu dem nur die\l"
	.string "Elite dieser Region Zugriff hat.$"



RocketHideout5FDocumento_103::
lock     
showmonpic SPECIES_NIDOQUEEN, 10, 3 
playmoncry SPECIES_NIDOQUEEN, CRY_MODE_ENCOUNTER  
msgbox RocketHideout5FDocumento_Text_103, MSGBOX_DEFAULT
hidemonpic
release     
end

RocketHideout5FDocumento_Text_103:
.string "NUMMER 12: NIDOQUEEN\p"
.string "KRAFTPUNKTE: 100\n"
.string "ANGRIFF: 92\l"
.string "VERTEIDIGUNG: 92\l"
.string "SPEZIAL-ANGRIFF: 80\l"
.string "SPEZIAL-VERTEIDIGUNG: 90\l"
.string "INITIATIVE: 76\l"
.string "INSGESAMT: 530\p"
	.string "Die Königin von TEAM ROCKET. Wenn wir\n"
	.string "ihre Fähigkeit Rohe Gewalt und einen\l"
	.string "Leben-Orb in Betracht ziehen, steigt\l"
	.string "ihr Spezial-Angriff von 80 auf\l"
	.string "beeindruckende 120. Außerdem sind ihre\l"
	.string "defensiven Werte beachtlich und die\l"
	.string "Vielfalt ihrer Attacken exzellent.$"



RocketHideout5FDocumento_104::
lock     
showmonpic SPECIES_NIDOKING, 10, 3   
playmoncry SPECIES_NIDOKING, CRY_MODE_ENCOUNTER
msgbox RocketHideout5FDocumento_Text_104, MSGBOX_DEFAULT
hidemonpic
release     
end

RocketHideout5FDocumento_Text_104:
.string "NUMMER 11: NIDOKING\p"
.string "KRAFTPUNKTE: 91\n"
.string "ANGRIFF: 102\l"
.string "VERTEIDIGUNG: 77\l"
.string "SPEZIAL-ANGRIFF: 90\l"
.string "SPEZIAL-VERTEIDIGUNG: 75\l"
.string "INITIATIVE: 95\l"
.string "INSGESAMT: 530\p"
	.string "Eine Maschine - geschaffen, um POKéMON\n"
	.string "zu besiegen. Dank seiner tödlichen\l"
	.string "Kombination von Rohe Gewalt und einem\l"
	.string "Leben-Orb, werden die Kraft der meisten\l"
	.string "seiner Spezial-Attacken wie\l"
	.string "Schlammbombe, Donner, Flammenwurf,\l"
	.string "Erdkräfte oder Eisstrahl zweimal um\l"
	.string "30% gesteigert, was seinen 90\l"
	.string "Spezial-Angriffswert weitaus\l"
	.string "gefährlicher macht, als die Zahl\l"
	.string "es vermuten lässt.$"



RocketHideout5FDocumento_105::
lock     
showmonpic SPECIES_GYARADOS, 10, 3   
playmoncry SPECIES_GYARADOS, CRY_MODE_ENCOUNTER
msgbox RocketHideout5FDocumento_Text_105, MSGBOX_DEFAULT
hidemonpic
release     
end

RocketHideout5FDocumento_Text_105:
.string "NUMMER 10: GYARADOS\p"
.string "KRAFTPUNKTE: 95\n"
.string "ANGRIFF: 125\l"
.string "VERTEIDIGUNG: 79\l"
.string "SPEZIAL-ANGRIFF: 60\l"
.string "SPEZIAL-VERTEIDIGUNG: 100\l"
.string "INITIATIVE: 81\l"
.string "INSGESAMT: 540\p"
	.string "Der Schrecken der Meere. Es hat eine\n"
	.string "Art Rivalität mit DRAGORAN und es ist\l"
	.string "nicht überraschend, dass sein\l"
	.string "Entwicklungsprozess ihn dazu befähigt\l"
	.string "hat, den notwendigen einen Punkt im\l"
	.string "Bereich Initiative zu erlangen, um sich\l"
	.string "vom heiligen Drachen abzuheben (81 zu\l"
	.string "80). Ein GARADOS zu zähmen wurde über\l"
	.string "Jahrhunderte hinweg als ein Zeichen\l"
	.string "von Macht und Überlegenheit unter\l"
	.string "Anglern und sogar Drachenprofis\l"
	.string "betrachtet.$"



RocketHideout5FDocumento_106::
lock     
showmonpic SPECIES_SNORLAX, 10, 3   
playmoncry SPECIES_SNORLAX, CRY_MODE_ENCOUNTER
msgbox RocketHideout5FDocumento_Text_106, MSGBOX_DEFAULT
hidemonpic
release     
end

RocketHideout5FDocumento_Text_106:
.string "NUMMER 9: SNORLAX\p"
.string "KRAFTPUNKTE: 160\n"
.string "ANGRIFF: 110\l"
.string "VERTEIDIGUNG: 65\l"
.string "SPEZIAL-ANGRIFF: 65\l"
.string "SPEZIAL-VERTEIDIGUNG: 110\l"
.string "INITIATIVE: 30\l"
	.string "INSGESAMT: 540\p"
	.string "Wenn wir seine Initiative ignorieren,\n"
	.string "hätte nur DRAGORAN höhere Gesamtwerte\l"
	.string "(510 zu 520). Trotzdem würde RELAXO\l"
	.string "immer noch die unnützen 65 im\l"
	.string "Spezial-Angriff haben, was es aber im\l"
	.string "Vergleich zu anderen POKéMON durch\l"
	.string "seine enorme Gesundheit und seinen\l"
	.string "beeindruckenden Bodyslam wettmacht -\l"
	.string "eine Attacke, die mit einer hohen\l"
	.string "Chance Paralyse auslösen kann. Das\l"
	.string "macht es zu einem äußerst hartnäckigen\l"
	.string "Gegner, wenn man nicht zufällig ein\l"
	.string "starkes physisches Kampf-POKéMON in\l"
	.string "seinem Team hat.$"



RocketHideout5FDocumento_107::
lock     
showmonpic SPECIES_VENUSAUR, 10, 3   
playmoncry SPECIES_VENUSAUR, CRY_MODE_ENCOUNTER
msgbox RocketHideout5FDocumento_Text_107, MSGBOX_DEFAULT
hidemonpic
release     
end

RocketHideout5FDocumento_Text_107:
.string "NUMMER 8: VENUSAUR\p"
.string "KRAFTPUNKTE: 90\n"
.string "ANGRIFF: 85\l"
.string "VERTEIDIGUNG: 93\l"
.string "SPEZIAL-ANGRIFF: 110\l"
.string "SPEZIAL-VERTEIDIGUNG: 110\l"
.string "INITIATIVE: 60\l"
	.string "INSGESAMT: 548\p"
	.string "Einer der drei Starter aus KANTO und\n"
	.string "der mit der besten Balance zwischen\l"
	.string "Offensive und Defensive mit zwei\l"
	.string "mächtigen STAB-Attacken dank seines\l"
	.string "Dual-Typs. Mit Optionen wie\l"
	.string "SCHLAMMBOMBE, GIGASAUGER oder\l"
	.string "BLÄTTERTANZ ist es quasi eine\l"
	.string "extremere Version von GIFLOR, der für\l"
	.string "seine Gegner zur Qual werden kann. Nach\l"
	.string "dem Krieg überlebten nur wenige seiner\l"
	.string "Spezies. Sie kamen schließlich unter die\l"
	.string "Obhut von PROF. EICH aus ALABASTIA.$"



RocketHideout5FDocumento_108::
lock     
showmonpic SPECIES_CHARIZARD, 10, 3  
playmoncry SPECIES_CHARIZARD, CRY_MODE_ENCOUNTER 
msgbox RocketHideout5FDocumento_Text_108, MSGBOX_DEFAULT
hidemonpic
release     
end

RocketHideout5FDocumento_Text_108:
.string "NUMMER 7: CHARIZARD\p"
.string "KRAFTPUNKTE: 78\n"
.string "ANGRIFF: 84\l"
.string "VERTEIDIGUNG: 78\l"
.string "SPEZIAL-ANGRIFF: 114\l"
.string "SPEZIAL-VERTEIDIGUNG: 95\l"
.string "INITIATIVE: 100\l"
	.string "INSGESAMT: 549\p"
	.string "Einer der drei Starter aus KANTO und\n"
	.string "derjenige mit dem höchsten\l"
	.string "Offensiv-Potential. Nur LAVADOS\l"
	.string "entfesselt in dieser Region noch\l"
	.string "furchteinflößende Flammen. Das gepaart\l"
	.string "mit seiner hohen Initiative und seinem\l"
	.string "Zugriff auf Drachen-Attacken macht\l"
	.string "ihn zu einem ernstzunehmenden Gegner\l"
	.string "für diesen Typen. Nach dem Krieg\l"
	.string "überlebten nur wenige seiner Spezies.\p"
	.string "Sie kamen schließlich unter die Obhut\n"
	.string "von PROF. EICH aus ALABASTIA.$"



RocketHideout5FDocumento_109::
lock     
showmonpic SPECIES_BLASTOISE, 10, 3  
playmoncry SPECIES_BLASTOISE, CRY_MODE_ENCOUNTER 
msgbox RocketHideout5FDocumento_Text_109, MSGBOX_DEFAULT
hidemonpic
release     
end

RocketHideout5FDocumento_Text_109:
.string "NUMMER 6: BLASTOISE\p"
.string "KRAFTPUNKTE: 99\n"
.string "ANGRIFF: 83\l"
.string "VERTEIDIGUNG: 120\l"
.string "SPEZIAL-ANGRIFF: 85\l"
.string "SPEZIAL-VERTEIDIGUNG: 105\l"
.string "INITIATIVE: 58\l"
	.string "INSGESAMT: 550\p"
	.string "Einer der drei Starter aus KANTO und\n"
	.string "wahrscheinlich der von den Dreien mit\l"
	.string "der höchsten Defensive, die er mit\l"
	.string "seinem Panzer rechtfertigt.\p"
	.string "Verteidigungsmäßig ist er auf einer\n"
	.string "Stufe mit Gestein-POKéMON und hält\l"
	.string "auch im Bereich der speziellen\l"
	.string "Verteidigung den Erwartungen stand.\p"
	.string "Nach dem Krieg überlebten nur wenige\n"
	.string "seiner Spezies. Sie kamen schließlich\l"
	.string "unter die Obhut von PROF. EICH aus\l"
	.string "ALABASTIA.$"



RocketHideout5FDocumento_110::
lock     
showmonpic SPECIES_LAPRAS, 10, 3   
playmoncry SPECIES_LAPRAS, CRY_MODE_ENCOUNTER
msgbox RocketHideout5FDocumento_Text_110, MSGBOX_DEFAULT
hidemonpic
release     
end

RocketHideout5FDocumento_Text_110:
.string "NUMMER 5: LAPRAS\p"
	.string "KRAFTPUNKTE: 140\n"
	.string "ANGRIFF: 85\l"
	.string "VERTEIDIGUNG: 80\l"
	.string "SPEZIAL-ANGRIFF: 95\l"
	.string "SPEZIAL-VERTEIDIGUNG: 105\l"
	.string "INITIATIVE: 45\l"
	.string "INSGESAMT: 550\p"
	.string "Die Mauer KANTOs, fähig, mit ARKTOS um\n"
	.string "den Eisthron der Region zu\l"
	.string "konkurrieren. Trotz seiner hohen\l"
	.string "Defensiv-Werte besitzt es eine\l"
	.string "beeindruckende Schlagkraft.\p"
	.string "Dank Attacken wie Donner, Psychokinese\n"
	.string "und STAB-Attacken wie Eisstrahl und\l"
	.string "Surfer, ist es das POKéMON, dass man mit\l"
	.string "LORELEI von den Top Vier assoziiert und\l"
	.string "Mitglied des einzigartigen Trios der TOP\l"
	.string "VIER.$"



RocketHideout5FDocumento_111::
lock     
showmonpic SPECIES_MACHAMP, 10, 3  
playmoncry SPECIES_MACHAMP, CRY_MODE_ENCOUNTER 
msgbox RocketHideout5FDocumento_Text_111, MSGBOX_DEFAULT
hidemonpic
release     
end

RocketHideout5FDocumento_Text_111:
.string "NUMMER 4: MACHAMP\p"
.string "KRAFTPUNKTE: 100\n"
.string "ANGRIFF: 136\l"
.string "VERTEIDIGUNG: 110\l"
.string "SPEZIAL-ANGRIFF: 65\l"
.string "SPEZIAL-VERTEIDIGUNG: 85\l"
.string "INITIATIVE: 55\l"
	.string "INSGESAMT: 551\p"
	.string "Der Mauerbrecher KANTOs, der DRAGORANS\n"
	.string "physischen Angriff knapp übertrifft\l"
	.string "und somit den Titel des physisch\l"
	.string "stärksten POKéMON der Region trägt.\p"
	.string "Er symbolisiert die höchste Stufe des\n"
	.string "Kampf-Typs. Er ist das POKéMON, dass\l"
	.string "man mit BRUNO von den TOP VIER\l"
	.string "assoziiert. Mit seiner\l"
	.string "außergewöhnlichen physischen Ausdauer\l"
	.string "ist es ihm gelungen, seine Schwäche\l"
	.string "gegen Flug-POKéMON zu überwinden.\p"
	.string "Mit seiner 110 DEFENSIVE kann er den\n"
	.string "Angriffen dieser POKéMON standhalten\l"
	.string "und sie mit seiner Steinkante, die\l"
	.string "niemals ihr Ziel verfehlt, auf die\l"
	.string "Bretter schicken.$"



RocketHideout5FDocumento_112::
lock     
showmonpic SPECIES_GENGAR, 10, 3  
playmoncry SPECIES_GENGAR, CRY_MODE_ENCOUNTER 
msgbox RocketHideout5FDocumento_Text_112, MSGBOX_DEFAULT
hidemonpic
release     
end

RocketHideout5FDocumento_Text_112:
.string "NUMMER 3: GENGAR\p"
.string "KRAFTPUNKTE: 70\n"
.string "ANGRIFF: 75\l"
.string "VERTEIDIGUNG: 60\l"
.string "SPEZIAL-ANGRIFF: 140\l"
.string "SPEZIAL-VERTEIDIGUNG: 97\l"
.string "INITIATIVE: 110\l"
	.string "INSGESAMT: 552\p"
	.string "Die Essenz und die spirituelle\n"
	.string "Ausstrahlung von LAVANDIA verkörpert\l"
	.string "in einem POKéMON und zwar dasjenige mit\l"
	.string "dem höchsten Spezial-Angriff in KANTO\l"
	.string "- auch wenn einige behaupten, dass\l"
	.string "dieser Titel seinem Erzrivalen SIMSALA\l"
	.string "gebührt. Es ist das POKéMON, dass man\l"
	.string "mit AGATHE assoziiert und mit Spukball\l"
	.string "und Schlammbombe holt es das Maximum\l"
	.string "aus seinen speziellen STAB-Atk heraus.\p"
	.string "Doch gehen das Potenzial und die\n"
	.string "Variationen der Attacken dieses\l"
	.string "POKéMON weit über diese beiden\l"
	.string "Attacken hinaus.$"



RocketHideout5FDocumento_113::
lock     
showmonpic SPECIES_ARCANINE, 10, 3  
playmoncry SPECIES_ARCANINE, CRY_MODE_ENCOUNTER 
msgbox RocketHideout5FDocumento_Text_113, MSGBOX_DEFAULT
hidemonpic
release     
end

RocketHideout5FDocumento_Text_113:
.string "NUMMER 2: ARCANINE\p"
.string "KRAFTPUNKTE: 90\n"
.string "ANGRIFF: 110\l"
.string "VERTEIDIGUNG: 80\l"
.string "SPEZIAL-ANGRIFF: 100\l"
.string "SPEZIAL-VERTEIDIGUNG: 80\l"
.string "INITIATIVE: 95\l"
	.string "INSGESAMT: 555\p"
	.string "Das POKéMON mit der höchsten\n"
	.string "Gesamtstärke unter den\l"
	.string "Nicht-Pseudo-Legendären. Trotz der\l"
	.string "weniger effizienten Verteilung seiner\l"
	.string "Werte nutzt es seinen physischen\l"
	.string "Angriff auf hervorragende Weise mit\l"
	.string "seiner STAB-Attacke Flammenblitz,\l"
	.string "Turbotempo und Nahkampf.\p"
	.string "Seine Fähigkeit Bedroher kombiniert\n"
	.string "mit Irrlicht und Zugang zu Morgen-\l"
	.string "grauen, verleiht ihm des Weiteren solide\l"
	.string "defensive Eigenschaften. Es wurde oft\l"
	.string "als das vierte legendäre POKéMON in\l"
	.string "KANTO angesehen, doch wurde bewiesen,\l"
	.string "dass sein Ursprung sich von dem der\l"
	.string "drei legendären Vögel unterscheidet.$"



RocketHideout5FDocumento_114::
lock     
showmonpic SPECIES_DRAGONITE, 10, 3  
playmoncry SPECIES_DRAGONITE, CRY_MODE_ENCOUNTER 
msgbox RocketHideout5FDocumento_Text_114, MSGBOX_DEFAULT
hidemonpic
release     
end

RocketHideout5FDocumento_Text_114:
.string "NUMMER 1: DRAGONITE\p"
.string "KRAFTPUNKTE: 91\n"
.string "ANGRIFF: 134\l"
.string "VERTEIDIGUNG: 95\l"
.string "SPEZIAL-ANGRIFF: 100\l"
.string "SPEZIAL-VERTEIDIGUNG: 100\l"
.string "INITIATIVE: 80\l"
	.string "INSGESAMT: 600\p"
	.string "Das Pseudo-Legendäre POKéMON KANTOs,\n"
	.string "auch wenn angenommen wird, dass sein\l"
	.string "Ursprung in der Drachenhöhle in JOHTO\l"
	.string "liegt. Seine Entwicklungsreihe wird als\l"
	.string "die heiligste und reinste angesehen.\p"
	.string "Seine Endform besitzt eine Macht, die\n"
	.string "mit der der meisten legendären POKéMON\l"
	.string "vergleichbar ist - und das hat ihm den\l"
	.string "Ruhm und Recht eingebracht, um als der\l"
	.string "ultimative Vertreter der sterblichen\l"
	.string "POKéMON und ihres Potentials zu gelten.$"



RocketHideout5FDocumento_115::
lock      
msgbox RocketHideout5FDocumento_Text_115, MSGBOX_DEFAULT
release     
end

RocketHideout5FDocumento_Text_115:
.string "BEOBACHTUNGEN:\p"
	.string "Anscheinend existiert eine Art -heilige\n"
	.string "Grenze- bei 580 STATUSWERTEN,\l"
	.string "festgelegt durch die LEGENDÄREN VÖGEL\l"
	.string "und anderen sub-legendären POKéMON\l"
	.string "aus fernen Regionen. Diese machen es\l"
	.string "dem Rest der sterblichen POKéMON\l"
	.string "unmöglich, diese Grenze zu\l"
	.string "überschreiten - die Pseudo-Legendären\l"
	.string "ausgenommen. Jeglicher Versuch, die\l"
	.string "Werte eines POKéMON zu steigern,\l"
	.string "führen zu dem plötzlichen Fall eines\l"
	.string "anderen Werts, als wäre eine Art\l"
	.string "Ausgleichsmechanismus im Spiel.\p"
	.string "Fast so, als würde sich die Natur\n"
	.string "dagegen wehren, dass wir über ihre\l"
	.string "Grenzen hinausgehen {PAUSE 25}…{PAUSE 25} Alles scheint\l"
	.string "einen Zustand des Gleichstands zu\l"
	.string "erreichen … Trotz alledem ist es nur ein\l"
	.string "weiteres Hindernis auf unserem Weg {PAUSE 5}…{PAUSE 5}$"



RocketHideout5FDocumento_116::
lock      
msgbox RocketHideout5FDocumento_Text_116, MSGBOX_DEFAULT
release     
end

RocketHideout5FDocumento_Text_116:
.string "DIE MACHT DER STATUSWERTE:\p"
	.string "Die STATUSWERTE sind die objektivste\n"
	.string "und messbarste Qualität eines POKéMON.\p"
	.string "Jedes POKéMON besitzt STATUSWERTE,\n"
	.string "die seiner Spezies zugeordnet sind.\l"
	.string "Diese ergeben sich aus der Summe der\l"
	.string "sechs essenziellen Parameter: KP, ANG,\l"
	.string "VERT, SP.VERT, SP.ANG und INIT. Manche\l"
	.string "POKéMON verfügen über bessere\l"
	.string "STATUSWERTE als andere. Einer der\l"
	.string "Gründe, warum MEWTU so stark wurde, ist\l"
	.string "die Tatsache, dass es sage und schreibe\l"
	.string "680 STATUSWERTE aufweist. Mit einem\l"
	.string "absurden SPEZIAL-ANGRIFF und einer\l"
	.string "immens hohen INITIATIVE erreicht kein\l"
	.string "anderes POKéMON aus KANTO diese\l"
	.string "Gesamtzahl an STATUSWERTEN.\p"
	.string "Zusammenfassend kann man die\n"
	.string "STATUSWERTE also als die physische,\l"
	.string "athletische und mentale Verfassung\l"
	.string "einer bestimmten POKéMON-Spezies\l"
	.string "betrachten - als deren reine Kraft und\l"
	.string "Energie. Diese Tatsache ist der Grund\l"
	.string "für eine Vielzahl von Experimenten mit\l"
	.string "dem Ziel, diese STATUSWERTE\l"
	.string "manipulierbar zu machen und sie bis ins\l"
	.string "Unendliche zu steigern. MEWTU ist der\l"
	.string "lebende Beweis dafür. Die Frage ist,\l"
	.string "wird es neue Fälle geben?$"



RocketHideout5FDocumento_117::
lock      
msgbox RocketHideout5FDocumento_Text_117, MSGBOX_DEFAULT
release     
end

RocketHideout5FDocumento_Text_117:
.string "Schadensberechnung:\p"
	.string "Schaden = (((Level x 2/5 + 2) x\n"
	.string "Basisschaden x (Sp.)Angr./50x(Sp.)Vert.\l"
	.string "x F1 + 2) x Volltreffer x F2 x Z/100 x\l"
	.string "STAB x Typ1 x Typ2 x F3)$"



RocketHideout5FDocumento_118::
lock      
msgbox RocketHideout5FDocumento_Text_118, MSGBOX_DEFAULT
release     
end

RocketHideout5FDocumento_Text_118:
.string "DIE MACHT DER STRATEGIE:\p"
	.string "Der zweite Pfeiler dieser Welt. Alleine\n"
	.string "die Tatsache, dass ein x-beliebiges\l"
	.string "Level 1 RATTFRATZ ein Level 100\l"
	.string "POKéMON besiegen kann, indem es eine\l"
	.string "Kombination aus FOKUSGURT +\l"
	.string "NOTSITUATION + RUCKZUCKHIEB einsetzt,\l"
	.string "beweist, wie essenziell eine gute\l"
	.string "Strategie ist. Jedes lebende POKéMON\l"
	.string "kann mit einer gut durchdachten\l"
	.string "Strategie bezwungen werden - dadurch,\l"
	.string "dass man die Schwächen des Gegners\l"
	.string "ausnutzt und seine eigenen Stärken\l"
	.string "klug ausspielt. Zusammenfassend lässt\l"
	.string "sich also sagen, dass STATUSWERTE zwar\l"
	.string "wichtig, aber die richtige Strategie in\l"
	.string "Kombination mit Wissen zum Spiel die\l"
	.string "Elemente sind, die einen zum Champ\l"
	.string "machen. Selbstverständlich benötigt\l"
	.string "man ein mächtiges und ausgewogenes\l"
	.string "Team, oder {PAUSE 25}…{PAUSE 25} POKéMON mit hohen\l"
	.string "STATUSWERTEN - je nachdem wie man es\l"
	.string "nennen möchte.$"



RocketHideout5F_58::
end



RocketHideout5F_59::
end



RocketHideout5F_60::
end



RocketHideout5F_EventScript_Rocket::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_2, RocketHideout5F_Text_RocketIntro, RocketHideout5F_Text_RocketDefeated
	msgbox RocketHideout5F_Text_RocketPostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideout5F_EventScript_Rocket2::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_3, RocketHideout5F_Text_Rocket2Intro, RocketHideout5F_Text_Rocket2Defeated
	msgbox RocketHideout5F_Text_Rocket2PostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideout5F_EventScript_Rocket3::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_5, RocketHideout5F_Text_Rocket3Intro, RocketHideout5F_Text_Rocket3Defeated
	msgbox RocketHideout5F_Text_Rocket3PostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideout5F_EventScript_Rocket4::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_4, RocketHideout5F_Text_Rocket4Intro, RocketHideout5F_Text_Rocket4Defeated
	msgbox RocketHideout5F_Text_Rocket4PostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideout5FDocumento_119::
msgbox RocketHideout5FDocumento_Text_119, MSGBOX_SIGN   
end

RocketHideout5FDocumento_Text_119:
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




RocketHideout5FDocumento_120::
msgbox RocketHideout5FDocumento_Text_120, MSGBOX_SIGN   
end

RocketHideout5FDocumento_Text_120:
	.string "SPEZIAL-TRAININGSRAUM DER ELITE T.ROCKETs$"



RocketHideout5FDocumento_121::
msgbox RocketHideout5FDocumento_Text_121, MSGBOX_SIGN   
end

RocketHideout5FDocumento_Text_121:
.string "GIOVANNIs PRIVATBÜRO$"



RocketHideout5FDocumento_122::
msgbox RocketHideout5FDocumento_Text_122, MSGBOX_SIGN   
end

RocketHideout5FDocumento_Text_122:
	.string "FORSCHUNGSBEREICH ZUM MAXIMAL\n"
	.string "ERREICHBAREN POTENZIAL EINES POKéMON$"



RocketHideout5FDocumento_123::
msgbox RocketHideout5FDocumento_Text_123, MSGBOX_SIGN   
end

RocketHideout5FDocumento_Text_123:
	.string "JOHTO$"



RocketHideout5FDocumento_124::
msgbox RocketHideout5FDocumento_Text_124, MSGBOX_SIGN   
end

RocketHideout5FDocumento_Text_124:
	.string "HOENN$"



RocketHideout5F_12_EventScript_Hiker::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM05, RocketHideout5F_12_EventScript_ReceivedFlash
	msgbox RocketHideout5F_12_Text_GetsDarkAheadHereYouGo, MSGBOX_DEFAULT
	giveitem ITEM_TWISTED_SPOON
	setflag FLAG_RECEIVED_HM05
	msgbox RocketHideout5F_12_Text_ExplainFlash, MSGBOX_DEFAULT
	release
	end

RocketHideout5F_12_EventScript_ReceivedFlash::
	msgbox RocketHideout5F_12_Text_ExplainFlash, MSGBOX_DEFAULT
	release
	end

RocketHideout5F_12_Text_GetsDarkAheadHereYouGo:
	.string "Wow! Es freut mich zu sehen, dass es\n"
	.string "nach wie vor Rekruten gibt, die\l"
	.string "Interesse am Lesen zeigen! Jemand wie\l"
	.string "du weiß sicherlich, wie er daraus\l"
	.string "seinen Nutzen ziehen kann!$"

RocketHideout5F_12_Text_ExplainFlash:
	.string "Der KRUMMLÖFFEL erhöht die Stärke von\n"
	.string "PSYCHO-TYP Attacken um 20 %.\p"
	.string "Stelle dir doch nur vor, wie stark\n"
	.string "die PSYCHOKINESE eines SIMSALA mit\l"
	.string "diesem Item wäre!$"



RocketHideout5F_12_EventScript_TM33::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_POKENAV, RocketHideout5F_12_EventScript_ReceivedTM33
	msgbox RocketHideout5F_12_Text_TM33, MSGBOX_DEFAULT
	giveitem ITEM_TM33
	setflag FLAG_RECEIVED_POKENAV
	msgbox RocketHideout5F_12_Text_ExplainTM33, MSGBOX_DEFAULT
	release
	end

RocketHideout5F_12_EventScript_ReceivedTM33::
	msgbox RocketHideout5F_12_Text_ExplainTM33, MSGBOX_DEFAULT
	release
	end

RocketHideout5F_12_Text_TM33:
	.string "Manchmal gerät man in eine Situation, wo\n"
	.string "der einzige Weg einen physischen\l"
	.string "Angreifer aufzuhalten, darin besteht,\l"
	.string "die physische Verteidigung des eigenen\l"
	.string "Teams zu verdoppeln.\p"
	.string "Doch wie kann man das erreichen?$"

RocketHideout5F_12_Text_ExplainTM33:
	.string "REFLEKTOR reduziert den Schaden von\n"
	.string "physischen Attacken für fünf Runden\l"
	.string "um die Hälfte, was besonders nützlich\l"
	.string "für PSYCHO-TYPEN sind, deren physische\l"
	.string "Verteidigung oftmals nicht sonderlich\l"
	.string "stark ist.$"



RocketHideout5F_22_EventScript_PP_MAX::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, RocketHideout5F_22_EventScript_ReceivedPP_MAX
	msgbox RocketHideout5F_22_Text_PP_MAX, MSGBOX_DEFAULT
	giveitem ITEM_PP_MAX
	setflag FLAG_RECEIVED_RED_OR_BLUE_ORB
	msgbox RocketHideout5F_22_Text_ExplainPP_MAX, MSGBOX_DEFAULT
	release
	end

RocketHideout5F_22_EventScript_ReceivedPP_MAX::
	msgbox RocketHideout5F_22_Text_ExplainPP_MAX, MSGBOX_DEFAULT
	release
	end

RocketHideout5F_22_Text_PP_MAX:
	.string "APs sind essenziell. Wenn einem POKéMON\n"
	.string "die AP ausgehen, wird es nutzlos,\l"
	.string "unabhängig davon, wie stark es ist.\p"
	.string "Hier, nimm das.$"

RocketHideout5F_22_Text_ExplainPP_MAX:
	.string "Denke stets sorgfältig nach, bevor du\n"
	.string "einen TOP ÄTHER gebrauchst. Attacken\l"
	.string "wie PSYCHOKINESE, HYPERSTRAHL oder\l"
	.string "FEUERSTURM können gute Optionen sein.$"

RocketHideout_5F_Mision_Pueblo_Paleta_izq::
lockall
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Mision_Pueblo_Paleta_move_1
waitmovement 0x0
delay 15
goto RocketHideout_5F_Mision_Pueblo_Paleta

RocketHideout_5F_Mision_Pueblo_Paleta_der::
lockall
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Mision_Pueblo_Paleta_move_1.1
waitmovement 0x0
delay 15
goto RocketHideout_5F_Mision_Pueblo_Paleta

RocketHideout_5F_Mision_Pueblo_Paleta::
playse SE_EXIT
clearflag FLAG_HIDE_ROUTE_103_RIVAL
addobject 1
waitse
delay 20
msgbox RocketHideout_5F_Mision_Pueblo_Paleta_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Mision_Pueblo_Paleta_move_3
applymovement 1, RocketHideout_5F_Mision_Pueblo_Paleta_move_2
waitmovement 0x0
msgbox RocketHideout_5F_Mision_Pueblo_Paleta_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_5F_Mision_Pueblo_Paleta_move_2.1
waitmovement 0x0
delay 10
msgbox RocketHideout_5F_Mision_Pueblo_Paleta_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_5F_Mision_Pueblo_Paleta_move_2.2
waitmovement 0x0
delay 20
applymovement 1, RocketHideout_5F_Mision_Pueblo_Paleta_move_4
waitmovement 0x0
delay 10
msgbox RocketHideout_5F_Mision_Pueblo_Paleta_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_5F_Mision_Pueblo_Paleta_move_2.2
waitmovement 0x0
delay 10
msgbox RocketHideout_5F_Mision_Pueblo_Paleta_Texto_4.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_5F_Mision_Pueblo_Paleta_move_2.3
waitmovement 0x0
delay 10
msgbox RocketHideout_5F_Mision_Pueblo_Paleta_Texto_4.2 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_5F_Mision_Pueblo_Paleta_Texto_4.3 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_5F_Mision_Pueblo_Paleta_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_5F_Mision_Pueblo_Paleta_move_5
waitmovement 0x0
msgbox RocketHideout_5F_Mision_Pueblo_Paleta_Texto_6 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Mision_Pueblo_Paleta_move_1.2
waitmovement 0x0
delay 15
msgbox RocketHideout_5F_Mision_Pueblo_Paleta_Texto_6.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_5F_Mision_Pueblo_Paleta_Texto_7 MSGBOX_AUTOCLOSE
msgbox RocketHideout_5F_Mision_Pueblo_Paleta_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_5F_Mision_Pueblo_Paleta_move_2.4
waitmovement 0x0
delay 10
msgbox RocketHideout_5F_Mision_Pueblo_Paleta_Texto_8.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_5F_Mision_Pueblo_Paleta_move_2.5
waitmovement 0x0
delay 10
msgbox RocketHideout_5F_Mision_Pueblo_Paleta_Texto_8.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_5F_Mision_Pueblo_Paleta_move_4
waitmovement 0x0
msgbox RocketHideout_5F_Mision_Pueblo_Paleta_Texto_9 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Mision_Pueblo_Paleta_move_2.6
applymovement 1, RocketHideout_5F_Mision_Pueblo_Paleta_move_6
waitmovement 0x0
setflag FLAG_HIDE_ROUTE_103_RIVAL
setflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
setflag FLAG_HIDE_FANCLUB_OLD_LADY
removeobject 1
setvar VAR_UNUSED_0x40F7, 56
release
end

RocketHideout_5F_Mision_Pueblo_Paleta_move_2.6:
delay_16
face_down
step_end

RocketHideout_5F_Mision_Pueblo_Paleta_move_2.5:
face_left
step_end

RocketHideout_5F_Mision_Pueblo_Paleta_move_2.4:
delay_16
face_down
delay_16
delay_8
face_right
delay_8
step_end

RocketHideout_5F_Mision_Pueblo_Paleta_move_2.3:
face_left
delay_16
face_up
delay_16
face_right
step_end

RocketHideout_5F_Mision_Pueblo_Paleta_move_2.1:
face_up
step_end

RocketHideout_5F_Mision_Pueblo_Paleta_move_2.2:
face_right
step_end

RocketHideout_5F_Mision_Pueblo_Paleta_Texto_1:
.string "GIOVANNI: Da bist du ja, {PLAYER}.$"

RocketHideout_5F_Mision_Pueblo_Paleta_Texto_2:
	.string "Der Kampf ist vorbei. Wie erwartet, hat\n"
	.string "er mich spielend leicht besiegt. Sein\l"
	.string "GLURAK ist eine wahre Seltenheit in\l"
	.string "unserer Region {PAUSE 25}…{PAUSE 25} Nur jemand wie EICH\l"
	.string "kann es ihm gegeben haben.$"

RocketHideout_5F_Mision_Pueblo_Paleta_Texto_3:
	.string "Nichts desto trotz ist er nicht\n"
	.string "unbesiegbar. Keiner ist unschlagbar.\p"
	.string "Derzeit könnten ihn unsere besten\n"
	.string "OFFIZIERE und ADMINISTRATOREN\l"
	.string "schlagen. Jedoch werden wir ihm nicht\l"
	.string "die Möglichkeit geben, von den\l"
	.string "Erfahrungen der Kämpfe gegen sie zu\l"
	.string "profitieren. Das würde lediglich\l"
	.string "bewirken, dass sich das Blatt später\l"
	.string "zu seinen Gunsten wendet.$"

RocketHideout_5F_Mision_Pueblo_Paleta_Texto_4:
	.string "Dieser ROT ist gut, sogar richtig gut.\p"
	.string "Aber er besitzt eine große Schwäche,\n"
	.string "{PLAYER}.$"

RocketHideout_5F_Mision_Pueblo_Paleta_Texto_4.1:
	.string "Für ihn ist das alles nur ein Spiel. Er\n"
	.string "kann den Helden spielen oder was auch\l"
	.string "immer er will. Aber die Wahrheit ist, dass\l"
	.string "er keinen Prinzipien folgt oder etwas\l"
	.string "Spezifisches zu erreichen wünscht.$"

RocketHideout_5F_Mision_Pueblo_Paleta_Texto_4.2:
	.string "Er ist nicht in unsere Basis\n"
	.string "eingedrungen, um -unsere bösen Pläne zu\l"
	.string "stoppen.- Er hat es nur deswegen getan,\l"
	.string "weil es ihm als die beste Option auf\l"
	.string "seinem Weg erschien. Vielleicht war ihm\l"
	.string "auch nur langweilig. Er erkennt nicht\l"
	.string "einmal ansatzweise den geringsten\l"
	.string "Unterschied zwischen dem Sieg über\l"
	.string "dich oder mich und dem Sieg gegen eine\l"
	.string "beliebige PICKNICKERIN auf Route 9.$"

RocketHideout_5F_Mision_Pueblo_Paleta_Texto_4.3:
	.string "Er glaubt, dass der Gewinn eines\n"
	.string "Kampfes ihn bestätigt, ganz gleich\l"
	.string "eines universellen Prinzips, dass ihn\l"
	.string "dazu befähigt, alles zu tun und zu\l"
	.string "erreichen, was er will. Und genau in\l"
	.string "diesem Punkt irrt er sich. Er denkt,\l"
	.string "diese Welt gehöre ihm, obwohl er gerade\l"
	.string "erst die Spitze des Eisbergs erblickt\l"
	.string "hat.$"

RocketHideout_5F_Mision_Pueblo_Paleta_Texto_5:
.string "{PAUSE 10}… {PAUSE 10}… {PAUSE 10}… {PAUSE 10}… {PAUSE 10}… {PAUSE 10}… {PAUSE 10}…{PAUSE 5}$"

RocketHideout_5F_Mision_Pueblo_Paleta_Texto_6:
	.string "Ich möchte, dass du ALABASTIA einen\n"
	.string "Besuch abstattest, {PLAYER}.\p"
	.string "Anscheinend ist es ROTs Heimat.$"

RocketHideout_5F_Mision_Pueblo_Paleta_Texto_6.1:
	.string "Ich habe ihm ein kleines Geschenk\n"
	.string "dagelassen, das ihn für eine Weile\l"
	.string "beschäftigen wird.\p"
	.string "Du brauchst dir im Moment also\n"
	.string "keine Sorgen um ihn zu machen.$"

RocketHideout_5F_Mision_Pueblo_Paleta_Texto_7:
	.string "Unter allen Missionen, die du bisher im\n"
	.string "Namen von TEAM ROCKET abgeschlossen\l"
	.string "hast, könnte diese die Wichtigste sein.\p"
	.string "Erkunde den Ort, sein Haus und EICHs\n"
	.string "Labor, um nach Dingen zu suchen, die für\l"
	.string "uns von Bedeutung sein könnten.$"

RocketHideout_5F_Mision_Pueblo_Paleta_Texto_8:
	.string "Wenn wir herausfinden können, warum er\n"
	.string "so handelt, wie er es tut, können wir ihn\l"
	.string "definitiv bezwingen {PAUSE 25}…{PAUSE 25}$"

RocketHideout_5F_Mision_Pueblo_Paleta_Texto_8.1:
	.string "ENoch etwas, {PLAYER}. Vermeide EICH,\n"
	.string "den Besitzer des Forschungslabors, um\l"
	.string "jeden Preis. Er hat angeblich schon vor\l"
	.string "Jahren das Kämpfen aufgegeben und\l"
	.string "sein Team in aller Öffentlichkeit\l"
	.string "entlassen, nachdem SIEGFRIED den Krieg\l"
	.string "gewonnen hatte. Aber mittlerweile\l"
	.string "glaube ich nichts von dem mehr, was in\l"
	.string "den Nachrichten gezeigt wird.$"

RocketHideout_5F_Mision_Pueblo_Paleta_Texto_8.2:
	.string "Er war früher ein sehr guter Trainer,\n"
	.string "bevor er seine Prinzipien über Bord\l"
	.string "warf.\p"
	.string "Sei auf der Hut.$"

RocketHideout_5F_Mision_Pueblo_Paleta_Texto_9:
.string "Das ist alles.\p"
	.string "Ich werde in meinem Privatbüro auf die\n"
	.string "Ergebnisse deiner Mission warten.\p"
	.string "Diesem hier natürlich. Nicht diesen\n"
	.string "schmutzigen Keller im vierten\l"
	.string "Stockwerk, dessen einziger Zweck darin\l"
	.string "besteht, den Schein zu wahren.$"

RocketHideout_5F_Mision_Pueblo_Paleta_move_1:
emote_exclamation_mark
walk_slow_right
walk_in_place_up
step_end

RocketHideout_5F_Mision_Pueblo_Paleta_move_1.1:
emote_exclamation_mark
walk_in_place_up
step_end

RocketHideout_5F_Mision_Pueblo_Paleta_move_1.2:
emote_exclamation_mark
step_end

RocketHideout_5F_Mision_Pueblo_Paleta_move_2:
walk_down
walk_down
walk_down
walk_left
walk_left
walk_left
walk_down
walk_in_place_right
step_end

RocketHideout_5F_Mision_Pueblo_Paleta_move_3:
delay_16
delay_16
face_left
step_end

RocketHideout_5F_Mision_Pueblo_Paleta_move_4:
walk_in_place_down
step_end

RocketHideout_5F_Mision_Pueblo_Paleta_move_5:
walk_in_place_right
step_end


RocketHideout_5F_Mision_Pueblo_Paleta_move_6:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout_5F_Combate_Andra::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 53
goto_if_gt RocketHideout_5F_Combate_Andra_3
compare VAR_UNUSED_0x40F7, 52
goto_if_gt RocketHideout_5F_Combate_Andra_2
msgbox RocketHideout_5F_Combate_Andra_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_5F_Combate_Andra_Texto_1.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_5F_Combate_Andra_Texto_1.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 58, RocketHideout_5F_Combate_Andra_Move_1.2
waitmovement 0x0
delay 10
msgbox RocketHideout_5F_Combate_Andra_Texto_2 MSGBOX_AUTOCLOSE
applymovement 58, RocketHideout_5F_Combate_Andra_Move_1
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 53
release
end

RocketHideout_5F_Combate_Andra_Move_1.2:
delay_8
face_up
delay_16
delay_8
face_player
delay_8
step_end

RocketHideout_5F_Combate_Andra_2::
msgbox RocketHideout_5F_Combate_Andra_Texto_3 MSGBOX_AUTOCLOSE
applymovement 58, RocketHideout_5F_Combate_Andra_Move_1
waitmovement 0x0
release
end

RocketHideout_5F_Combate_Andra_3::
msgbox RocketHideout_5F_Combate_Andra_Texto_4 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_5F_Combate_Andra_Texto_4.1 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_5F_Combate_Andra_Texto_5 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 58, RocketHideout_5F_Combate_Andra_Move_2
waitmovement 0x0
msgbox RocketHideout_5F_Combate_Andra_Texto_6 MSGBOX_AUTOCLOSE
playse 559
msgbox RocketHideout_5F_Combate_Andra_Texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANDRA_4, RocketHideout_5F_Combate_Andra_Texto_8
msgbox RocketHideout_5F_Combate_Andra_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 58, RocketHideout_5F_Combate_Andra_Move_1.2
waitmovement 0x0
delay 10
msgbox RocketHideout_5F_Combate_Andra_Texto_9.1 MSGBOX_AUTOCLOSE
delay 15
playse SE_DING_DONG
waitse
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Combate_Andra_Move_2
applymovement 58, RocketHideout_5F_Combate_Andra_Move_2
waitmovement 0x0
msgbox RocketHideout_5F_Combate_Andra_Texto_10 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_5F_Combate_Andra_Texto_11 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
fadescreen 1
delay 20
removeobject 58
fadescreen 0
setvar VAR_UNUSED_0x40F7, 55
release
end

RocketHideout_5F_Prohibido_Salir::
lock
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Prohibido_Salir_Move_1
waitmovement 0x0
msgbox RocketHideout_5F_Prohibido_Salir_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Prohibido_Salir_Move_2
waitmovement 0x0
release
end

RocketHideout_5F_Prohibido_Salir_Move_1:
walk_in_place_down
step_end

RocketHideout_5F_Prohibido_Salir_Move_2:
walk_slow_down
step_end

RocketHideout_5F_Prohibido_Salir_Texto_1:
	.string "-Ich habe explizite Anweisungen\n"
	.string "erhalten, an diesem Ort zu bleiben,\l"
	.string "bis neue Anweisungen kommen.-$"

RocketHideout_5F_Combate_Andra_Texto_1:
	.string "Also, das ist, was LAMBDA meinte, als er\n"
	.string "gesagt hat, dass die Basis in PRISMANIA\l"
	.string "mit den anderen nicht zu vergleichen\l"
	.string "sei. Ich rede nicht nur von den üblichen\l"
	.string "Artikeln, die man kaufen kann.\p"
	.string "Die Vielfalt ist noch größer. Hast du\n"
	.string "all die Forschungszonen gesehen?\p"
	.string "Es kommt mir so vor, als seien sie hier\n"
	.string "wirklich sehr engagiert, wenn es um das\l"
	.string "Entschlüsseln des Geheimnisses der\l"
	.string "wahren Stärke von POKéMON geht.$"

RocketHideout_5F_Combate_Andra_Texto_1.1:
	.string "…{PAUSE 15} …{PAUSE 15} …{PAUSE 15} …{PAUSE 15} …{PAUSE 15} …{PAUSE 15}$"

RocketHideout_5F_Combate_Andra_Texto_1.2:
	.string "Auch wenn wir immer noch keinen Zugriff\n"
	.string "zu den wichtigsten Räumen haben, war\l"
	.string "mir schon klar, dass TEAM ROCKET eine\l"
	.string "beeindruckende Organisation ist. Aber\l"
	.string "ich hätte mir nicht träumen lassen,\l"
	.string "dass solche Orte existieren, als ATLAS\l"
	.string "am ersten Tag auf EILAND FÜNF seine\l"
	.string "Präsentation gehalten hat {PAUSE 15}...{PAUSE 15}$"

RocketHideout_5F_Combate_Andra_Texto_2:
	.string "Egal. Wir sind noch dabei, Dinge zu\n"
	.string "erkunden. Vielleicht werden wir am Ende\l"
	.string "mehr als nur gewöhnliche Diebe sein.\p"
	.string "Denkst du nicht auch?$"

RocketHideout_5F_Combate_Andra_Texto_3:
	.string "Ich werde eine Weile hierbleiben und\n"
	.string "über diesen Ort nachdenken. Vielleicht\l"
	.string "solltest du dasselbe tun, {PLAYER}.\p"
	.string "Ich hoffe, wir arbeiten wieder bei\n"
	.string "zukünftigen Missionen zusammen.$"

RocketHideout_5F_Combate_Andra_Texto_4:
	.string "Weißt du was, {PLAYER}? Ich glaube,\n"
	.string "dass hinter diesen Türen viele Dinge\l"
	.string "verborgen sind, von denen die Eliten\l"
	.string "dieser Region nicht wollen, dass wir sie\l"
	.string "entdecken. Ich rede von Wissen, das\l"
	.string "weit über die KANTO-Region hinausgeht.$"

RocketHideout_5F_Combate_Andra_Texto_4.1:
	.string "Ich möchte ein Teil dieses Ortes sein\n"
	.string "und das bedeutet, die beste TRAINERIN\l"
	.string "zu werden, die ich sein kann. Ich habe\l"
	.string "keine Zeit zu verlieren, {PLAYER}. Ich\l"
	.string "werde meine POKéMON weiter trainieren\l"
	.string "und so stark werden, bis mir niemand in\l"
	.string "dieser Organisation auch nur annähernd\l"
	.string "das Wasser reichen kann.$"

RocketHideout_5F_Combate_Andra_Texto_5:
.string "{PAUSE 15}…{PAUSE 15} … {PAUSE 15}…{PAUSE 15} …{PAUSE 15} …{PAUSE 15} …{PAUSE 15} …{PAUSE 15}$"

RocketHideout_5F_Combate_Andra_Texto_6:
	.string "Der mysteriöse TRAINER ist hier? Und\n"
	.string "GIOVANNI will, dass wir hier bleiben, bis\l"
	.string "dieser Knirps wieder weg ist?$"

RocketHideout_5F_Combate_Andra_Texto_7:
	.string "Ich kann nicht noch mehr Zeit verlieren.\n"
	.string "Ich habe bereits alle HOCHRANGIGEN\l"
	.string "Mitglieder hier besiegt. Ich wollte\l"
	.string "eigentlich noch stärker werden, bevor\l"
	.string "ich wieder gegen dich kämpfe, aber {PAUSE 25}…{PAUSE 25} Du\l"
	.string "hast keine Ahnung, wie viel besser meine\l"
	.string "POKéMON seit unserem letzten Kampf\l"
	.string "geworden sind!$"

RocketHideout_5F_Combate_Andra_Texto_8:
	.string "Ich verstehe immer noch nicht,\n"
	.string "wie du das machst.$"

RocketHideout_5F_Combate_Andra_Texto_9:
	.string "Ich hätte ahnen müssen, dass du\n"
	.string "ebenfalls die Ressourcen nutzt, die uns\l"
	.string "zur Verfügung stehen. Und ich sehe,\l"
	.string "dass du durch deine Missionen in\l"
	.string "LAVANDIA und dem FELSTUNNEL noch\l"
	.string "stärker geworden bist.$"
	
RocketHideout_5F_Combate_Andra_Texto_9.1:
	.string "Ich glaube, dass wir, wenn wir jetzt\n"
	.string "nach oben gehen und gegen diesen ROT\l"
	.string "kämpfen würden, ihn besiegen könnten.\p"
	.string "Wir sind jetzt viel stärker, als wir\n"
	.string "es bei der MONDBERG-Mission waren!$"

RocketHideout_5F_Combate_Andra_Texto_10:
	.string "-WARNUNG AN ALLE HOCHRANGIGEN\n"
	.string "MITGLIEDER UND FÜHRUNGSKRÄFTE!-\p"
	.string "Der mysteriöse TRAINER hat soeben\n"
	.string "unsere Basis verlassen.\p"
	.string "Ihr könnt jetzt wieder hochkommen.$"

RocketHideout_5F_Combate_Andra_Texto_11:
.string "ANDRA: Perfekt!\p"
	.string "KANTO wartet auf mich, {PLAYER}.\n"
	.string "Ich werde in meiner Freizeit ein\l"
	.string "Spezialtraining absolvieren. Du wirst\l"
	.string "meine POKéMON bei unserem nächsten\l"
	.string "Kampf nicht wiedererkennen.$"

RocketHideout_5F_Combate_Andra_Move_1:
walk_in_place_up
step_end

RocketHideout_5F_Puedes_Pasar::
release
end

RocketHideout_5F_Combate_Andra_Move_2:
emote_exclamation_mark
step_end


RocketHideout_5F_Texto_Prohibido_Pasar:
	.string "Auf der Tür steht:\p"
	.string "-Zugang nur für durch GIOVANNI\n"
	.string "autorisiertes Personal-$"

RocketHideout_5F_Paso_Despacho_Giovanni::
compare VAR_UNUSED_0x40F7, 61
goto_if_gt RocketHideout_5F_Puedes_Pasar
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Paso_Despacho_Giovanni_Move_1
waitmovement 0x0
msgbox RocketHideout_5F_Texto_Prohibido_Pasar MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Paso_Despacho_Giovanni_Move_2
waitmovement 0x0
release
end

RocketHideout_5F_Paso_Sala_Entrenamiento::
compare VAR_UNUSED_0x40F7, 90
goto_if_gt RocketHideout_5F_Puedes_Pasar
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Paso_Despacho_Giovanni_Move_1
waitmovement 0x0
msgbox RocketHideout_5F_Texto_Prohibido_Pasar MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Paso_Despacho_Giovanni_Move_2
waitmovement 0x0
release
end

RocketHideout_5F_Paso_Sala_Potencial_Maximo::
compare VAR_UNUSED_0x40F7, 62
goto_if_gt RocketHideout_5F_Puedes_Pasar
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Paso_Despacho_Giovanni_Move_1
waitmovement 0x0
msgbox RocketHideout_5F_Texto_Prohibido_Pasar MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Paso_Despacho_Giovanni_Move_2
waitmovement 0x0
release
end

RocketHideout_5F_Paso_Sala_Potencial_Johto::
compare VAR_UNUSED_0x40F7, 117
goto_if_gt RocketHideout_5F_Puedes_Pasar
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Paso_Despacho_Giovanni_Move_1
waitmovement 0x0
msgbox RocketHideout_5F_Texto_Prohibido_Pasar MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Paso_Despacho_Giovanni_Move_2
waitmovement 0x0
release
end

RocketHideout_5F_Paso_Sala_Potencial_Hoenn::
compare VAR_UNUSED_0x40F7, 183
goto_if_gt RocketHideout_5F_Puedes_Pasar
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Paso_Despacho_Giovanni_Move_1
waitmovement 0x0
msgbox RocketHideout_5F_Texto_Prohibido_Pasar MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Paso_Despacho_Giovanni_Move_2
waitmovement 0x0
release
end


RocketHideout_5F_Paso_Despacho_Giovanni_Move_1:
walk_in_place_up
step_end

RocketHideout_5F_Paso_Despacho_Giovanni_Move_2:
walk_slow_down
step_end

RocketHideout_5F_Escena_Detencion_Fuji::
clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_5
applymovement OBJ_EVENT_ID_PLAYER, ViridianCity_Escena_5_Move_1
setvar VAR_UNUSED_0x40F7, 77
warpsilent MAP_LAVENDER_TOWN_FUJI_HOUSE, 8, 0
waitmovement 0x0
release
end

Base_Profunda_Tienda_Pokemon::
lock
faceplayer
msgbox Text_CompraPokemon_Base_Profunda MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_VENTA_BASE_PROFUNDA, 0
switch VAR_RESULT
case 0, EventScript_NidoranF
case 1, EventScript_Shellder
case 2, EventScript_Rhyhorn
case 3, EventScript_Nidorino
case 4, EventScript_Sneasel
case 5, EventScript_Electabuzz
release
end

EventScript_Sneasel::
lock
showmoneybox 0, 0
msgbox EventScript_Sneasel_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 55000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 55000 0
waitse
updatemoneybox
delay 50
hidemoneybox
givemon SPECIES_SNEASEL, 26, ITEM_NONE
release
end

EventScript_Electabuzz::
lock
showmoneybox 0, 0
msgbox EventScript_Electabuzz_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 80000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 80000 0
waitse
updatemoneybox
delay 50
hidemoneybox
givemon SPECIES_ELECTABUZZ, 30, ITEM_NONE
release
end

EventScript_Nidorino::
lock
showmoneybox 0, 0
msgbox EventScript_Nidorino_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 42000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 42000 0
waitse
updatemoneybox
delay 50
hidemoneybox
givemon SPECIES_NIDORINO, 23, ITEM_NONE
release
end

EventScript_Rhyhorn::
lock
showmoneybox 0, 0
msgbox EventScript_Rhyhorn_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 35000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 35000 0
waitse
updatemoneybox
delay 50
hidemoneybox
givemon SPECIES_RHYHORN, 23, ITEM_NONE
release
end

EventScript_Shellder::
lock
showmoneybox 0, 0
msgbox EventScript_Shellder_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 17500
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 17500 0
waitse
updatemoneybox
delay 50
hidemoneybox
givemon SPECIES_SHELLDER, 18, ITEM_NONE
release
end

EventScript_NidoranF::
lock
showmoneybox 0, 0
msgbox EventScript_NidoranF_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 12000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 12000 0
waitse
updatemoneybox
delay 50
hidemoneybox
givemon SPECIES_NIDORAN_F, 15, ITEM_NONE
release
end

Text_CompraPokemon_Base_Profunda:
.string "Willkommen! Wie kann ich dir helfen?$"

EventScript_Sneasel_Texto_1:
	.string "Bist du sicher, dass du ein\n"
	.string "SNIEBEL kaufen möchtest?\p"
	.string "Das macht 55.000¥.$"

EventScript_Electabuzz_Texto_1:
	.string "Bist du sicher, dass du ein\n"
	.string "ELEKTEK kaufen möchtest?\p"
	.string "Das macht 80.000¥.$"

EventScript_Nidorino_Texto_1:
	.string "Bist du sicher, dass du ein\n"
	.string "NIDORINO kaufen möchtest?\p"
	.string "Das macht 42.000¥.$"

EventScript_Rhyhorn_Texto_1:
	.string "Bist du sicher, dass du ein\n"
	.string "RIHORN kaufen möchtest?\p"
	.string "Das macht 35.000¥.$"

EventScript_Shellder_Texto_1:
	.string "Bist du sicher, dass du ein\n"
	.string "MUSCHAS kaufen möchtest?\p"
	.string "Das macht 17.500¥.$"

EventScript_NidoranF_Texto_1:
	.string "Bist du sicher, dass du ein\n"
	.string "NIDORAN♀ kaufen möchtest?\p"
	.string "Das macht 12.000¥.$"


RocketHideout5F_64_NPC::
lock
faceplayer
msgbox RocketHideout5F_64_NPC_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout5F_64_NPC_Texto_1:
	.string "Wenn es erforderlich ist zu handeln,\n"
	.string "kann Optimismus, selbst in seiner leicht\l"
	.string "trügerischen Form, eine positive\l"
	.string "Wirkung haben.$"


RocketHideout5F_Secundaria_Frank::
lock
addobject 48
clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout5F_Secundaria_Frank_Move_1
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout5F_Secundaria_Frank_Move_2
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout5F_Secundaria_Frank_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout5F_Secundaria_Frank_Move_3
applymovement 48, RocketHideout5F_Secundaria_Frank_Move_4
waitmovement 0x0
msgbox RocketHideout5F_Secundaria_Frank_Texto_2 MSGBOX_AUTOCLOSE
applymovement 48, RocketHideout5F_Secundaria_Frank_Move_5
waitmovement 0x0
msgbox RocketHideout5F_Secundaria_Frank_Texto_3 MSGBOX_AUTOCLOSE
applymovement 48, RocketHideout5F_Secundaria_Frank_Move_6
waitmovement 0x0
msgbox RocketHideout5F_Secundaria_Frank_Texto_4 MSGBOX_AUTOCLOSE
applymovement 48, RocketHideout5F_Secundaria_Frank_Move_7
waitmovement 0x0
msgbox RocketHideout5F_Secundaria_Frank_Texto_5 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout5F_Secundaria_Frank_Move_9
applymovement 48, RocketHideout5F_Secundaria_Frank_Move_8
waitmovement 0x0
delay 15
msgbox RocketHideout5F_Secundaria_Frank_Texto_6 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 48, RocketHideout5F_Secundaria_Frank_Move_2
waitmovement 0x0
waitse
applymovement 48, RocketHideout5F_Secundaria_Frank_Move_10
waitmovement 0x0
msgbox RocketHideout5F_Secundaria_Frank_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout5F_Secundaria_Frank_Texto_8 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout5F_Secundaria_Frank_Move_11
waitmovement 0x0
msgbox RocketHideout5F_Secundaria_Frank_Texto_9 MSGBOX_AUTOCLOSE
applymovement 48, RocketHideout5F_Secundaria_Frank_Move_1
waitmovement 0x0
msgbox RocketHideout5F_Secundaria_Frank_Texto_10 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
applymovement 48, RocketHideout5F_Secundaria_Frank_Move_12
waitmovement 0x0
trainerbattle_no_intro TRAINER_TRAINER_152, RocketHideout5F_Secundaria_Frank_Texto_11
msgbox RocketHideout5F_Secundaria_Frank_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout5F_Secundaria_Frank_Texto_13 MSGBOX_AUTOCLOSE
applymovement 48, RocketHideout5F_Secundaria_Frank_Move_6
waitmovement 0x0
msgbox RocketHideout5F_Secundaria_Frank_Texto_14 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 48, RocketHideout5F_Secundaria_Frank_Move_1
waitmovement 0x0
waitse
msgbox RocketHideout5F_Secundaria_Frank_Texto_15 MSGBOX_AUTOCLOSE
applymovement 48, RocketHideout5F_Secundaria_Frank_Move_13
waitmovement 0x0
removeobject 48
setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
setvar VAR_UNUSED_0x404E, 1
release
end

RocketHideout5F_Secundaria_Frank_Move_13:
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout5F_Secundaria_Frank_Move_12:
walk_right
step_end

RocketHideout5F_Secundaria_Frank_Move_11:
walk_slow_up
face_left
delay_8
delay_8
delay_8
walk_in_place_left
step_end

RocketHideout5F_Secundaria_Frank_Move_10:
face_right
step_end

RocketHideout5F_Secundaria_Frank_Move_9:
walk_down
face_up
delay_8
delay_8
delay_8
walk_in_place_left
step_end

RocketHideout5F_Secundaria_Frank_Move_8:
walk_left
walk_left
walk_left
walk_left
step_end

RocketHideout5F_Secundaria_Frank_Move_7:
walk_slow_left
step_end

RocketHideout5F_Secundaria_Frank_Move_6:
face_up
step_end

RocketHideout5F_Secundaria_Frank_Move_5:
walk_in_place_left
step_end

RocketHideout5F_Secundaria_Frank_Move_4:
walk_left
walk_left
walk_left
step_end

RocketHideout5F_Secundaria_Frank_Move_3:
walk_slow_right
walk_slow_right
step_end

RocketHideout5F_Secundaria_Frank_Move_2:
emote_exclamation_mark
step_end

RocketHideout5F_Secundaria_Frank_Move_1:
walk_in_place_right
delay_8
delay_8
step_end

RocketHideout5F_Secundaria_Frank_Texto_1:
	.string "????: Na, na, na. Du bist ja doch nicht\n"
	.string "so inkompetent, wie ich dachte.$"

RocketHideout5F_Secundaria_Frank_Texto_2:
	.string "FRANK: Was ist los?\n"
	.string "Überrascht mich hier zu sehen?$"

RocketHideout5F_Secundaria_Frank_Texto_3:
	.string "Du bist nicht der Einzige, der befördert\n"
	.string "wurde, {PLAYER}. Du bist jetzt ein\l"
	.string "HOCHRANGIGER RÜPEL, genauso wie ich es\l"
	.string "während der MONDBERG Mission war.$"

RocketHideout5F_Secundaria_Frank_Texto_4:
	.string "Aber wie du siehst, bin ich jetzt ein\n"
	.string "OFFIZIER. Du weißt, was das bedeutet,\l"
	.string "oder?$"

RocketHideout5F_Secundaria_Frank_Texto_5:
	.string "Du stehst immer noch unter mir und\n"
	.string "meinen Befehlen. Hab also besser weiter\l"
	.string "Respekt vor mir, RÜPELEIN!\p"
	.string "Und jetzt verpiss dich!$"

RocketHideout5F_Secundaria_Frank_Texto_6:
.string "{PAUSE 20}…{PAUSE 20}$"

RocketHideout5F_Secundaria_Frank_Texto_7:
	.string "Nur für eine Weile? Glaubst du\n"
	.string "wirklich, es ist so einfach in dieser\n"
	.string "Organisation aufzusteigen? Zwischen\l"
	.string "uns sind Welten.$"

RocketHideout5F_Secundaria_Frank_Texto_8:
	.string "So, so. Ein bisschen Erfolg hat also dein\n"
	.string "Ego aufgeblasen. Wie dumm, wenn man\l"
	.string "sich anschaut, dass du nicht mal der\l"
	.string "Beste unter deinesgleichen bist.\p"
	.string "ANDRAist stärker als du und so wird\n"
	.string "es auch immer bleiben.$"

RocketHideout5F_Secundaria_Frank_Texto_9:
	.string "Sei vorsichtig, was du sagst, Pissbacke.\n"
	.string "Als OFFIZIER habe ich Zugriff auf\l"
	.string "POKéMON von einer Stärke, die du noch\l"
	.string "nie zuvor gesehen hast.\p"
	.string "Ihr HOCHRANGIGEN RÜPEL müsst mit den\n"
	.string "Resten auskommen, die keiner in der\l"
	.string "Region haben will. Hochwertige Reste,\l"
	.string "weil du ein HOCHRANGIGER RÜPEL bist,\l"
	.string "aber trotzdem Reste.$"

RocketHideout5F_Secundaria_Frank_Texto_10:
	.string "Ich werde dir zeigen, was ich meine.$"

RocketHideout5F_Secundaria_Frank_Texto_11:
	.string "Also war meine Niederlage auf dem\n"
	.string "Mondberg kein Zufall?$"

RocketHideout5F_Secundaria_Frank_Texto_12:
	.string "Weißt du, was dein Problem ist,\n"
	.string "{PLAYER}?$"

RocketHideout5F_Secundaria_Frank_Texto_13:
	.string "Du glaubst, du kannst jeden allein\n"
	.string "durchs Kämpfen besiegen und ihnen\l"
	.string "sogar deinen Willen aufzwingen, nur weil\l"
	.string "deine POKéMON gegen die deines Gegners\l"
	.string "gewonnen haben.$"

RocketHideout5F_Secundaria_Frank_Texto_14:
	.string "Vielleicht reicht das, um besser als ein\n"
	.string "gewöhnlicher RÜPEL zu sein. Aber in den\l"
	.string "oberen Kreisen von TEAM ROCKET läuft\l"
	.string "das nicht so. Du wirst mehr brauchen,\l"
	.string "als nur dezente Kampffähigkeiten, wenn\l"
	.string "du hier aufsteigen willst.$"

RocketHideout5F_Secundaria_Frank_Texto_15:
	.string "Wenn ich ADMINISTRATOR werde und du\n"
	.string "immer noch als HOCHRANGIGER RÜPEL\l"
	.string "rumeierst, wird das Erste, was ich zur\l"
	.string "Feier meiner Beförderung machen werde,\l"
	.string "sein, dich wieder Fossilien sammeln zu\l"
	.string "lassen, wie ein gewöhnlicher kleiner\l"
	.string "DRECKSRÜPEL.$"


Ruinas_Alfa_Post_DLC::
compare VAR_UNUSED_0x40F7, 177
goto_if_lt RocketHideout_5F_Puedes_Pasar
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Paso_Despacho_Giovanni_Move_1
waitmovement 0x0
msgbox Ruinas_Alfa_Post_DLC_Texto_Prohibido_Pasar MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Paso_Despacho_Giovanni_Move_2
waitmovement 0x0
release
end

Ruinas_Alfa_Post_DLC_Texto_Prohibido_Pasar:
	.string "-There is nothing more to\n"
	.string "do here.-$"
