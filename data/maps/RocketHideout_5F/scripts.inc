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
	.string "traducir$"



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
	.string "EXEGGUTOR or KINGLER are two of\n"
	.string "POKÉMON with tremendous BASE STATs\l"
	.string "that are usually ignored by average\l"
	.string "TRAINERS, no one would say that KINGLER\l"
	.string "has 130 base of ATTACK, or EXEGGUTOR\l"
	.string "with 125 base of SPECIAL ATTACK,\l"
	.string "although there is and surprises lot of\l"
	.string "people.$"

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
.string "NUMBER 15: FLAREON\p"
.string "HP: 65\n"
.string "ATTACK: 130\l"
.string "DEFENSE: 60\l"
.string "SP. ATK: 95\l"
.string "SP. DEF: 110\l"
.string "SPEED: 65\l"
.string "TOTAL: 525\p"
	.string "The evolved form of EEVEE, which\n"
	.string "distributes its STATs less efficiently,\l"
	.string "nonetheless a flare blitz of this\l"
	.string "POKÉMON with the ability - GUTS -\l"
	.string "activated will burn everything that\l"
	.string "could touch, it is impossible to find it\l"
	.string "on the wild, only evolvable through an\l"
	.string "EEVEE that only the elite of the region\l"
	.string "has access to.$"


RocketHideout5FDocumento_101::
lock     
showmonpic SPECIES_VAPOREON, 10, 3   
playmoncry SPECIES_VAPOREON, CRY_MODE_ENCOUNTER
msgbox RocketHideout5FDocumento_Text_101, MSGBOX_DEFAULT
hidemonpic
release     
end

RocketHideout5FDocumento_Text_101:
.string "NUMBER 14: VAPOREON\p"
.string "HP: 130\n"
.string "ATTACK: 65\l"
.string "DEFENSE: 60\l"
.string "SP. ATK: 110\l"
.string "SP. DEF: 95\l"
.string "SPEED: 65\l"
.string "TOTAL: 525\p"
	.string "The evolved form of EEVEE most\n"
	.string "balanced, capable of withstanding any\l"
	.string "blow and attacking with the most\l"
	.string "powerful Hydro Pump in the region,\l"
	.string "second only to the OMASTAR FOSSIL, it\l"
	.string "is impossible to find it on the wild, only\l"
	.string "evolvable through an EEVEE that only\l"
	.string "the elite of the region has access to.$"


RocketHideout5FDocumento_102::
lock     
showmonpic SPECIES_JOLTEON, 10, 3  
playmoncry SPECIES_JOLTEON, CRY_MODE_ENCOUNTER 
msgbox RocketHideout5FDocumento_Text_102, MSGBOX_DEFAULT
hidemonpic
release     
end

RocketHideout5FDocumento_Text_102:
.string "NUMBER 13: JOLTEON\p"
.string "HP: 65\n"
.string "ATTACK: 65\l"
.string "DEFENSE: 60\l"
.string "SP. ATK: 110\l"
.string "SP. DEF: 95\l"
.string "SPEED: 130\l"
.string "TOTAL: 525\p"
	.string "The KANTO's bolt, with an unusually high\n"
	.string "special attack considering its base\l"
	.string "speed of 130, only surpassed by\l"
	.string "ELECTRODE, making it the best choice\l"
	.string "against flying and water types, though\l"
	.string "somewhat lacking in coverage moves, it\l"
	.string "is impossible to find it on the wild, only\l"
	.string "evolvable through an EEVEE that only\l"
	.string "the elite of the region has access to.$"



RocketHideout5FDocumento_103::
lock     
showmonpic SPECIES_NIDOQUEEN, 10, 3 
playmoncry SPECIES_NIDOQUEEN, CRY_MODE_ENCOUNTER  
msgbox RocketHideout5FDocumento_Text_103, MSGBOX_DEFAULT
hidemonpic
release     
end

RocketHideout5FDocumento_Text_103:
.string "NUMBER 12: NIDOQUEEN\p"
.string "HP: 100\n"
.string "ATTACK: 92\l"
.string "DEFENSE: 92\l"
.string "SP. ATK: 80\l"
.string "SP. DEF: 90\l"
.string "SPEED: 76\l"
.string "TOTAL: 530\p"
	.string "The ROCKET queen, if we consider her\n"
	.string "ability - SHEER FORCE - and the LIFE\l"
	.string "ORB combo, those 80 SP. ATK powers up\l"
	.string "to 120, apart from that, her defensive\l"
	.string "STATs are notable, and her moves\l"
	.string "variety, excellent.$"



RocketHideout5FDocumento_104::
lock     
showmonpic SPECIES_NIDOKING, 10, 3   
playmoncry SPECIES_NIDOKING, CRY_MODE_ENCOUNTER
msgbox RocketHideout5FDocumento_Text_104, MSGBOX_DEFAULT
hidemonpic
release     
end

RocketHideout5FDocumento_Text_104:
.string "NUMBER 11: NIDOKING\p"
.string "HP: 91\n"
.string "ATTACK: 102\l"
.string "DEFENSE: 77\l"
.string "SP. ATK: 90\l"
.string "SP. DEF: 75\l"
.string "SPEED: 95\l"
.string "TOTAL: 530\p"
	.string "A machine designed to defeat POKÉMON,\n"
	.string "due to his deadly combination of SHEER\l"
	.string "FORCE and LIFE ORB, reaching the power\l"
	.string "of most of its special moves, such as\l"
	.string "SLUDGE BOMB, THUNDER, FLAMETHROWER,\l"
	.string "EARTH POWER, or ICE BEAM, with a double\l"
	.string "increase of 30% in their usual power and\l"
	.string "turning from a base 90 SPECIAL ATTACK\l"
	.string "into something much more dangerous\l"
	.string "than the number says.$"



RocketHideout5FDocumento_105::
lock     
showmonpic SPECIES_GYARADOS, 10, 3   
playmoncry SPECIES_GYARADOS, CRY_MODE_ENCOUNTER
msgbox RocketHideout5FDocumento_Text_105, MSGBOX_DEFAULT
hidemonpic
release     
end

RocketHideout5FDocumento_Text_105:
.string "NUMBER 10: GYARADOS\p"
.string "HP: 95\n"
.string "ATTACK: 125\l"
.string "DEFENSE: 79\l"
.string "SP. ATK: 60\l"
.string "SP. DEF: 100\l"
.string "SPEED: 81\l"
.string "TOTAL: 540\p"
	.string "The sea's terror, it holds some kind of\n"
	.string "rivalry with DRAGONITE, and it's not\l"
	.string "surprising that its evolutionary\l"
	.string "process has enabled it to gain the\l"
	.string "necessary 1 point at speed to make a\l"
	.string "distinction (81 to 80), with the sacred\l"
	.string "dragon, taming a GYARADOS has been\l"
	.string "considered for centuries a\l"
	.string "demonstration of power and superior\l"
	.string "hierarchy among fishermen and even\l"
	.string "dragon tamers.$"



RocketHideout5FDocumento_106::
lock     
showmonpic SPECIES_SNORLAX, 10, 3   
playmoncry SPECIES_SNORLAX, CRY_MODE_ENCOUNTER
msgbox RocketHideout5FDocumento_Text_106, MSGBOX_DEFAULT
hidemonpic
release     
end

RocketHideout5FDocumento_Text_106:
.string "NUMBER 9: SNORLAX\p"
.string "HP: 160\n"
.string "ATTACK: 110\l"
.string "DEFENSE: 65\l"
.string "SP. ATK: 65\l"
.string "SP. DEF: 110\l"
.string "SPEED: 30\l"
	.string "TOTAL: 540\p"
	.string "If we ignore the speed, just DRAGONITE\n"
	.string "would have a higher global STATs, (510\l"
	.string "to 520), even so SNORLAX would keep\l"
	.string "having an unuseless 65 of special\l"
	.string "attack, which makes it greater than\l"
	.string "other POKÉMON is it vast health amount\l"
	.string "and it shocking body slam with high\l"
	.string "chances to paralyze which makes it an\l"
	.string "headache if we do not have a strong\l"
	.string "physic fight type.$"



RocketHideout5FDocumento_107::
lock     
showmonpic SPECIES_VENUSAUR, 10, 3   
playmoncry SPECIES_VENUSAUR, CRY_MODE_ENCOUNTER
msgbox RocketHideout5FDocumento_Text_107, MSGBOX_DEFAULT
hidemonpic
release     
end

RocketHideout5FDocumento_Text_107:
.string "NUMBER 8: VENUSAUR\p"
.string "HP: 90\n"
.string "ATTACK: 85\l"
.string "DEFENSE: 93\l"
.string "SP. ATK: 110\l"
.string "SP. DEF: 110\l"
.string "SPEED: 60\l"
	.string "TOTAL: 548\p"
	.string "One of the three KANTO's starter, the\n"
	.string "one with the best offensive-defensive\l"
	.string "relation, with 2 potent STAB moves\l"
	.string "thank due to it dual type, with SLUDGE\l"
	.string "BOMB, GIGA DRAIN, or PETAL DANCE as\l"
	.string "options, like an extreme VILEPLUME\l"
	.string "which can turn into a torture for its\l"
	.string "opponents, after the war, just a few\l"
	.string "specimens survived and these ended up\l"
	.string "under the care of PROF. OAK from PALLET\l"
	.string "TOWN.$"



RocketHideout5FDocumento_108::
lock     
showmonpic SPECIES_CHARIZARD, 10, 3  
playmoncry SPECIES_CHARIZARD, CRY_MODE_ENCOUNTER 
msgbox RocketHideout5FDocumento_Text_108, MSGBOX_DEFAULT
hidemonpic
release     
end

RocketHideout5FDocumento_Text_108:
.string "NUMBER 7: CHARIZARD\p"
.string "HP: 78\n"
.string "ATTACK: 84\l"
.string "DEFENSE: 78\l"
.string "SP. ATK: 114\l"
.string "SP. DEF: 95\l"
.string "SPEED: 100\l"
	.string "TOTAL: 549\p"
	.string "One of the three KANTO's starter, the\n"
	.string "one with the highest offensive\l"
	.string "potential, only MOLTRES unleashes more\l"
	.string "fearsome flames in this region, its good\l"
	.string "speed and access to dragon-type moves\l"
	.string "makes it competent against this type,\l"
	.string "after the war, just a few specimens\l"
	.string "survived and these ended up under the\l"
	.string "care of PROF. OAK from PALLET TOWN.$"



RocketHideout5FDocumento_109::
lock     
showmonpic SPECIES_BLASTOISE, 10, 3  
playmoncry SPECIES_BLASTOISE, CRY_MODE_ENCOUNTER 
msgbox RocketHideout5FDocumento_Text_109, MSGBOX_DEFAULT
hidemonpic
release     
end

RocketHideout5FDocumento_Text_109:
.string "NUMBER 6: BLASTOISE\p"
.string "HP: 99\n"
.string "ATTACK: 83\l"
.string "DEFENSE: 120\l"
.string "SP. ATK: 85\l"
.string "SP. DEF: 105\l"
.string "SPEED: 58\l"
	.string "TOTAL: 550\p"
	.string "One of the three KANTO's starter,\n"
	.string "probably the most defensive of three\l"
	.string "with a high physical defense that\l"
	.string "justifies with it shell, defensively\l"
	.string "speaking, it is on par with rock types\l"
	.string "and similarly withstands them well on\l"
	.string "the special side, after the war, just a\l"
	.string "few specimens survived and these ended\l"
	.string "up under the care of PROF. OAK from\l"
	.string "PALLET TOWN.$"



RocketHideout5FDocumento_110::
lock     
showmonpic SPECIES_LAPRAS, 10, 3   
playmoncry SPECIES_LAPRAS, CRY_MODE_ENCOUNTER
msgbox RocketHideout5FDocumento_Text_110, MSGBOX_DEFAULT
hidemonpic
release     
end

RocketHideout5FDocumento_Text_110:
.string "NUMBER 5: LAPRAS\p"
	.string "HP: 140\n"
	.string "ATTACK: 85\l"
	.string "DEFENSE: 80\l"
	.string "SP. ATK: 95\l"
	.string "SP. DEF: 105\l"
	.string "SPEED: 45\l"
	.string "TOTAL: 550\p"
	.string "KANTO's wall, capable of competing\n"
	.string "against ARTICUNO for the region's icy\l"
	.string "throne, keeps intact its ability to hit\l"
	.string "despite its great defenses, thanks to\l"
	.string "THUNDERBOLT, PSYCHIC, and STAB with\l"
	.string "ICE BEAM and SURF. Top POKEMON of\l"
	.string "LORELEI from the ELITE 4.$"



RocketHideout5FDocumento_111::
lock     
showmonpic SPECIES_MACHAMP, 10, 3  
playmoncry SPECIES_MACHAMP, CRY_MODE_ENCOUNTER 
msgbox RocketHideout5FDocumento_Text_111, MSGBOX_DEFAULT
hidemonpic
release     
end

RocketHideout5FDocumento_Text_111:
.string "NUMBER 4: MACHAMP\p"
.string "HP: 100\n"
.string "ATTACK: 136\l"
.string "DEFENSE: 110\l"
.string "SP. ATK: 65\l"
.string "SP. DEF: 85\l"
.string "SPEED: 55\l"
	.string "TOTAL: 551\p"
	.string "The KANTO's defensive wallbreaker,\n"
	.string "surpassing by a bit the DRAGONITE's\l"
	.string "physical power gets the throne of the\l"
	.string "physically strongest POKÉMON of the\l"
	.string "region, symbolizing the utmost\l"
	.string "achievement for a fighting type, it\l"
	.string "stands as the top choice for BRUNO\l"
	.string "from the ELITE FOUR, its exceptional\l"
	.string "physical endurance has made it to\l"
	.string "overcome the perceived weakness of\l"
	.string "fighting against flying types,\l"
	.string "perfectly withstanding the physical\l"
	.string "onslaughts of these POKÉMON with its\l"
	.string "base 110 DEFENSE and then knocking\l"
	.string "them down with a STONE EDGE that\l"
	.string "never fails.$"



RocketHideout5FDocumento_112::
lock     
showmonpic SPECIES_GENGAR, 10, 3  
playmoncry SPECIES_GENGAR, CRY_MODE_ENCOUNTER 
msgbox RocketHideout5FDocumento_Text_112, MSGBOX_DEFAULT
hidemonpic
release     
end

RocketHideout5FDocumento_Text_112:
.string "NUMBER 3: GENGAR\p"
.string "HP: 70\n"
.string "ATTACK: 75\l"
.string "DEFENSE: 60\l"
.string "SP. ATK: 140\l"
.string "SP. DEF: 97\l"
.string "SPEED: 110\l"
	.string "TOTAL: 552\p"
	.string "The essence and spiritual vibes of\n"
	.string "LAVENDER TOWN materialized in a\l"
	.string "POKÉMON, the one with the highest\l"
	.string "SPECIAL ATTACK of KANTO despite some\l"
	.string "swearing that was; it great rival\l"
	.string "ALAKAZAM, characteristic POKÉMON of\l"
	.string "AGATHA, it perfectly exploits its STAB\l"
	.string "moves with SHADOW BALL and SLUDGE BOMB\l"
	.string "on the special side, but the potential\l"
	.string "techniques and variations of this\l"
	.string "POKÉMON go far beyond these two moves.$"



RocketHideout5FDocumento_113::
lock     
showmonpic SPECIES_ARCANINE, 10, 3  
playmoncry SPECIES_ARCANINE, CRY_MODE_ENCOUNTER 
msgbox RocketHideout5FDocumento_Text_113, MSGBOX_DEFAULT
hidemonpic
release     
end

RocketHideout5FDocumento_Text_113:
.string "NUMBER 2: ARCANINE\p"
.string "HP: 90\n"
.string "ATTACK: 110\l"
.string "DEFENSE: 80\l"
.string "SP. ATK: 100\l"
.string "SP. DEF: 80\l"
.string "SPEED: 95\l"
	.string "TOTAL: 555\p"
	.string "The highest global power\n"
	.string "non-pseudo-legendary POKÉMON, despite\l"
	.string "not distributing its STATs as\l"
	.string "efficiently as others, makes good use\l"
	.string "of its physical attack with a STAB FLARE\l"
	.string "BLITZ, EXTREMESPEED, and CLOSE COMBAT.\p"
	.string "Its ability - INTIMIDATE -, along\n"
	.string "with WILL-O-WISP and access to\l"
	.string "MORNING SUN, also provide it with solid\l"
	.string "defensive attributes, it was often\l"
	.string "mistaken as the fourth legendary in\l"
	.string "KANTO, but it has been confirmed that\l"
	.string "its origin is distinct from that of\l"
	.string "the three sacred birds.$"



RocketHideout5FDocumento_114::
lock     
showmonpic SPECIES_DRAGONITE, 10, 3  
playmoncry SPECIES_DRAGONITE, CRY_MODE_ENCOUNTER 
msgbox RocketHideout5FDocumento_Text_114, MSGBOX_DEFAULT
hidemonpic
release     
end

RocketHideout5FDocumento_Text_114:
.string "NUMBER 1: DRAGONITE\p"
.string "HP: 91\n"
.string "ATTACK: 134\l"
.string "DEFENSE: 95\l"
.string "SP. ATK: 100\l"
.string "SP. DEF: 100\l"
.string "SPEED: 80\l"
	.string "TOTAL: 600\p"
	.string "The KANTO's pseudo-legendary, even\n"
	.string "though it is thought to have origins in\l"
	.string "the DRAGON's DEN of JOHTO, its\l"
	.string "evolutionary line is regarded as the\l"
	.string "most sacred and pure, its final form\l"
	.string "have a power on par with the most of\l"
	.string "legendaries, earning it fame as the\l"
	.string "premier representative of mortal\l"
	.string "POKÉMON and what they can reach.$"



RocketHideout5FDocumento_115::
lock      
msgbox RocketHideout5FDocumento_Text_115, MSGBOX_DEFAULT
release     
end

RocketHideout5FDocumento_Text_115:
.string "OBSERVATIONS:\p"
	.string "Apparently exists some kind of -sacred\n"
	.string "line-, at the 580 BASE STATs, marked by\l"
	.string "the LEGENDARY BIRDS besides other sub\l"
	.string "legendaries POKÉMON in other regions,\l"
	.string "that disables to the rest of mortals\l"
	.string "POKÉMON to surpassing that number\l"
	.string "except of the pseudo-legendaries. Any\l"
	.string "effort to selectively enhance a\l"
	.string "POKÉMON's stat, causes a sudden\l"
	.string "decrease in another stat, as a\l"
	.string "compensatory measure, almost as if\l"
	.string "nature opposes us exceeding…{PAUSE 20}\l"
	.string "Everything has a tendency to reach\l"
	.string "homeostasis…{PAUSE 20} Despite that, it is just\l"
	.string "another bump in the road…$"



RocketHideout5FDocumento_116::
lock      
msgbox RocketHideout5FDocumento_Text_116, MSGBOX_DEFAULT
release     
end

RocketHideout5FDocumento_Text_116:
.string "THE POWER OF BASE STATs:\p"
	.string "BASE STATs are the most objective and\n"
	.string "measurable quality of every POKÉMON.\p"
	.string "Each POKÉMON has some BASE STATs\n"
	.string "attached to it specie, as the result of\l"
	.string "the sum of each stat HP, AT, DEF, SP.DEF,\l"
	.string "SP.AT, and SPE, the six essential\l"
	.string "parameters, some POKÉMON have better\l"
	.string "BASE STATs than others, and one of the\l"
	.string "reasons MEWTWO became so strong is the\l"
	.string "fact that it boasts with an\l"
	.string "extraordinary amount of 680 points of\l"
	.string "BASE STATs, with an insane SPECIAL\l"
	.string "ATTACK and SPEED, not any POKÉMON from\l"
	.string "KANTO could reach that total BASE\l"
	.string "STATs amount. In conclusión, the BASE\l"
	.string "STATs could be considered as the\l"
	.string "overall physical, athletic, and mental\l"
	.string "condition of certain species of\l"
	.string "POKÉMON, indeed, pure power and energy,\l"
	.string "the reason of vast number of\l"
	.string "experiments in search of manipulating\l"
	.string "and raising these BASE STATs until the\l"
	.string "infinite, MEWTWO is a proof of that,\l"
	.string "would new cases emerge?$"



RocketHideout5FDocumento_117::
lock      
msgbox RocketHideout5FDocumento_Text_117, MSGBOX_DEFAULT
release     
end

RocketHideout5FDocumento_Text_117:
.string "The damage formula:\p"
	.string "Damage(HP) = ( (Lv. 2 / 5) + 2 Attack\n"
	.string "Power / 50 / Defense) 1Mod. + 2 CH 2 Mod.\l"
	.string "Rnd / 100 STAB Effec. Type 1 Effec.\l"
	.string "Type 2 3 Mod.; - RND:85-100(92.077\l"
	.string "APPROX)$"



RocketHideout5FDocumento_118::
lock      
msgbox RocketHideout5FDocumento_Text_118, MSGBOX_DEFAULT
release     
end

RocketHideout5FDocumento_Text_118:
.string "THE POWER OF STRATEGY:\p"
	.string "The second pillar of this world, the\n"
	.string "single fact that a common level 1\l"
	.string "RATTATA could defeat a level 100\l"
	.string "POKÉMON using the FOCUS SASH +\l"
	.string "ENDEAVOR + QUICK ATTACK combo, shows\l"
	.string "how important it is to have a good\l"
	.string "strategy. Any existing POKÉMON can be\l"
	.string "defeated with a good strategy,\l"
	.string "focusing on the weak points of the\l"
	.string "opponent and bringing up your own\l"
	.string "strengths. In conclusion, BASE STATs\l"
	.string "are important, but an appropriate\l"
	.string "strategy along with game knowledge are\l"
	.string "the elements that will turn you into a\l"
	.string "champion, with, of course, a powerful\l"
	.string "and balanced team or…{PAUSE 20} with high BASE\l"
	.string "STATs, whatever you prefer to call it.$"



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
	.string "ROCKET ELITE's SPECIAL TRAINING ROOM$"



RocketHideout5FDocumento_121::
msgbox RocketHideout5FDocumento_Text_121, MSGBOX_SIGN   
end

RocketHideout5FDocumento_Text_121:
.string "GIOVANNI's PRIVATE OFFICE$"



RocketHideout5FDocumento_122::
msgbox RocketHideout5FDocumento_Text_122, MSGBOX_SIGN   
end

RocketHideout5FDocumento_Text_122:
	.string "RESEARCH AREA ABOUT THE MAXIMUM POWER\n"
	.string "ACHIEVABLE BY A POKÉMON$"



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
	.string "Wow! I'm glad to know there are still\n"
	.string "recruits showing interest in reading!\l"
	.string "Someone like you surely knows how to\l"
	.string "take advantage of it!$"

RocketHideout5F_12_Text_ExplainFlash:
	.string "TWISTED SPOON increases the power of\n"
	.string "PSYCHIC attacks by 20%. Imagine the\l"
	.string "power that an ALAKAZAM could reach\l"
	.string "holding this item!$"



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
	.string "Sometimes, there comes a point where\n"
	.string "the only way to wall a physical attacker\l"
	.string "is by doubling your team's own physical\l"
	.string "defense, how is this achieved?$"

RocketHideout5F_12_Text_ExplainTM33:
	.string "REFLECT will reduce damage from\n"
	.string "physical moves by half for 5 turns,\l"
	.string "which is very useful for PSYCHIC-TYPE\l"
	.string "PÓKEMONS whose physical defense is not\l"
	.string "particularly strong.$"



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
	.string "PP are essentials, if a POKÉMON runs out\n"
	.string "of it, it gets unuseless no matter how\l"
	.string "strong it is, take this.$"

RocketHideout5F_22_Text_ExplainPP_MAX:
	.string "Consider your choice carefully before\n"
	.string "applying PP MAX; moves like PSYCHIC,\l"
	.string "HYPER BEAM, or FLAMETHROWER can be\l"
	.string "good choices.$"

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
.string "GIOVANNI: {PLAYER}{PAUSE 25}…{PAUSE 25} you're here.$"

RocketHideout_5F_Mision_Pueblo_Paleta_Texto_2:
	.string "The battle is over, as expected he\n"
	.string "defeated me very easily, that\l"
	.string "CHARIZARD is an eccentricity in our\l"
	.string "region…{PAUSE 20} just someone like OAK could\l"
	.string "have given it.$"

RocketHideout_5F_Mision_Pueblo_Paleta_Texto_3:
	.string "Even so, he is not unattainable, no one\n"
	.string "is, currently our best men could\l"
	.string "neutralize him but we won't grant him\l"
	.string "the satisfaction of enhancing his\l"
	.string "experience with our trust men, ensuring\l"
	.string "he'll be the one to reverse the\l"
	.string "situation later.$"

RocketHideout_5F_Mision_Pueblo_Paleta_Texto_4:
	.string "That RED is good, very good.\p"
	.string "But has a clear weakness, {PLAYER}.$"

RocketHideout_5F_Mision_Pueblo_Paleta_Texto_4.1:
	.string "For him, that's just a game; he can play\n"
	.string "the hero or whatever he wants, but the\l"
	.string "truth is, deep down, he doesn't act\l"
	.string "according to any principle, he's not\l"
	.string "pursuing a specific goal.$"

RocketHideout_5F_Mision_Pueblo_Paleta_Texto_4.2:
	.string "He hasn't even entered our BASE to\n"
	.string "- stop our evil plans -, he just did\l"
	.string "because it looked as the best option\l"
	.string "in his paper route, he might even got\l"
	.string "bored; he doesn't perceives even a\l"
	.string "little difference between defeating\l"
	.string "you or me, or a random PICKNICKER\l"
	.string "at ROUTE 9.$"

RocketHideout_5F_Mision_Pueblo_Paleta_Texto_4.3:
	.string "That's the point: he believes that\n"
	.string "winning a battle validates him, as a\l"
	.string "universal principle that enables him to\l"
	.string "do and achieve anything. And that's\l"
	.string "where he goes wrong: thinking this\l"
	.string "world belongs to him when he has just\l"
	.string "peered at the tip of the iceberg.$"

RocketHideout_5F_Mision_Pueblo_Paleta_Texto_5:
.string "{PAUSE 10}… {PAUSE 10}… {PAUSE 10}… {PAUSE 10}… {PAUSE 10}… {PAUSE 10}… {PAUSE 10}…{PAUSE 5}$"

RocketHideout_5F_Mision_Pueblo_Paleta_Texto_6:
	.string "I want you to visit PALLET TOWN.\p"
	.string "Apparently, RED's origin place.$"

RocketHideout_5F_Mision_Pueblo_Paleta_Texto_6.1:
.string "I gave him a present, with which\n"
	.string "he'll be entertained at LAVENDER.\p"
	.string "So don't care about him now.$"

RocketHideout_5F_Mision_Pueblo_Paleta_Texto_7:
	.string "Among all your missions at TEAM ROCKET\n"
	.string "service, this one could be the most\l"
	.string "crucial, explore that place, his home,\l"
	.string "OAK's lab, in search of any data that\l"
	.string "could be interesting to us.$"

RocketHideout_5F_Mision_Pueblo_Paleta_Texto_8:
	.string "If we can figure out the reasons why he\n"
	.string "acts like this, we could definitely\l"
	.string "neutralize him…$"

RocketHideout_5F_Mision_Pueblo_Paleta_Texto_8.1:
	.string "One more thing, {PLAYER}.\p"
	.string "Avoid OAK, the owner of PALLET\n"
	.string "TOWN POKÉMON RESEARCH LAB.\p"
	.string "He retired from battles ages ago, publicy\n"
	.string "releasing his team, after LANCE victory.\p"
	.string "But nowadays, I don't believe a single\n"
	.string "word it's said in the social media.$"

RocketHideout_5F_Mision_Pueblo_Paleta_Texto_8.2:
	.string "He was a skilled TRAINER in the past,\n"
	.string "before renouncing to his principles.\p"
	.string "You must proceed with caution.$"

RocketHideout_5F_Mision_Pueblo_Paleta_Texto_9:
.string "That's all.\p"
	.string "I'll be in my private office waiting\n"
	.string "for results, the real one, not that\l"
	.string "dirty basement at the B4F, whose only\l"
	.string "usefulness is to keep up appearances.$"

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
	.string "-I have received explicit orders to\n"
	.string "stay in this place until new notices.-$"

RocketHideout_5F_Combate_Andra_Texto_1:
	.string "{PLAYER}{PAUSE 15}…{PAUSE 15} So this is what PETREL referred\n"
	.string "to when telling us about the CELADON's\l"
	.string "base has no comparison with the others,\l"
	.string "it's not just the usual store offerings\l"
	.string "we can buy; the variety is even more\l"
	.string "extensive, have you checked out all the\l"
	.string "research zones? It appears they are\l"
	.string "quite committed to the science behind\l"
	.string "the real power of a POKÉMON.$"

RocketHideout_5F_Combate_Andra_Texto_1.1:
	.string "…{PAUSE 15} …{PAUSE 15} …{PAUSE 15} …{PAUSE 15} …{PAUSE 15} …{PAUSE 15}$"

RocketHideout_5F_Combate_Andra_Texto_1.2:
	.string "It seems we still don't have access to\n"
	.string "the most important rooms, I knew TEAM\l"
	.string "ROCKET was a formidable organization,\l"
	.string "however, on the day of the\l"
	.string "presentation at FIVE ISLAND, when we\l"
	.string "met ARCHER, I couldn't grasp that\l"
	.string "places like these existed…$"

RocketHideout_5F_Combate_Andra_Texto_2:
	.string "Either way, we're both in a phase of\n"
	.string "exploration, maybe we'll become\l"
	.string "something more than just common\l"
	.string "thieves, don't you agree?$"

RocketHideout_5F_Combate_Andra_Texto_3:
	.string "I'll stay here for a while,\n"
	.string "thinking about this place, maybe you\l"
	.string "must do the same, {PLAYER}. Hope to\l"
	.string "concur with you in the future!$"

RocketHideout_5F_Combate_Andra_Texto_4:
	.string "You know what, {PLAYER}?\p"
	.string "I think behind these doors, there\n"
	.string "are many things the elites of this\l"
	.string "region don't want us to discover, a\l"
	.string "knowledge that extends far beyond the\l"
	.string "KANTO region.$"

RocketHideout_5F_Combate_Andra_Texto_4.1:
	.string "You know: I want to be part of this\n"
	.string "place too, and that means being the\l"
	.string "best TRAINER I can be, I don't have time\l"
	.string "to waste, {PLAYER}; I'll keep training\l"
	.string "my POKÉMON until no one in this\l"
	.string "organization can even come close\l"
	.string "to me.$"

RocketHideout_5F_Combate_Andra_Texto_5:
.string "{PAUSE 15}…{PAUSE 15} … {PAUSE 15}…{PAUSE 15} …{PAUSE 15} …{PAUSE 15} …{PAUSE 15} …{PAUSE 15}$"

RocketHideout_5F_Combate_Andra_Texto_6:
	.string "The mysteriously TRAINER is here?\p"
	.string "GIOVANNI doesn't want us to move even\n"
	.string "a bit of this place until that shrimp\l"
	.string "gets out?$"

RocketHideout_5F_Combate_Andra_Texto_7:
	.string "I can't waste more time.\p"
	.string "I already have defeated all the HIGH\n"
	.string "RANKS of this place, I wanted to keep\l"
	.string "improving even more until fighting\l"
	.string "against you but{PAUSE 15}…{PAUSE 15}\p"
	.string "You have no idea how much my POKÉMON\n"
	.string "have grown since our last battle!$"

RocketHideout_5F_Combate_Andra_Texto_8:
	.string "I still don't understand how you do it.$"

RocketHideout_5F_Combate_Andra_Texto_9:
	.string "Damn! I should have supposed that you\n"
	.string "also take advantage of the items and\l"
	.string "resources that we have access, and I\l"
	.string "see that you became even tougher due\l"
	.string "to your missions at LAVENDER and ROCK\l"
	.string "TUNNEL.$"
	
RocketHideout_5F_Combate_Andra_Texto_9.1:
	.string "Now I'm convinced: if you and I went\n"
	.string "to the upper floor right now and faced\l"
	.string "RED, we would defeat him!\p"
	.string "We are not the same like we were\n"
	.string "at the MT.MOON mission!$"

RocketHideout_5F_Combate_Andra_Texto_10:
	.string "- WARNING FOR ALL HIGH RANKS\n"
	.string "AND ROCKET EXECUTIVES -\p"
	.string "RED just left our base, you're\n"
	.string "free to go outside now.$"

RocketHideout_5F_Combate_Andra_Texto_11:
.string "ANDRA: Perfect!\p"
	.string "KANTO is waiting for me, {PLAYER}.\p"
	.string "I'll be undergoing special training,\n"
	.string "as long as I'm not assigned to any\l"
	.string "missions, you won't recognize my\l"
	.string "POKÉMON the next time we battle!$"

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
	.string "It's written on the door:\p"
	.string "-Only personnel authorized\n"
	.string "directly by GIOVANNI-.$"

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
.string "Welcome! How may I serve you?$"

EventScript_Sneasel_Texto_1:
.string "Wanna buy a SNEASEL?\n"
	.string "It will cost ¥55,000.$"

EventScript_Electabuzz_Texto_1:
.string "Wanna buy an ELECTABUZZ?\n"
	.string "It will cost ¥80,000.$"

EventScript_Nidorino_Texto_1:
.string "Wanna buy a NIDORINO?\n"
	.string "It will cost ¥42,000.$"

EventScript_Rhyhorn_Texto_1:
.string "Wanna buy a RHYHORN?\n"
	.string "It will cost ¥35,000.$"

EventScript_Shellder_Texto_1:
.string "Wanna buy a SHELLDER?\n"
	.string "It will cost ¥17,500.$"

EventScript_NidoranF_Texto_1:
.string "Wanna buy a NIDORAN♀?\n"
	.string "It will cost ¥12,000.$"


RocketHideout5F_64_NPC::
lock
faceplayer
msgbox RocketHideout5F_64_NPC_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout5F_64_NPC_Texto_1:
	.string "When any action is required, optimism,\n"
	.string "even in its slightly illusory form, can\l"
	.string "have a positive impact.$"


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
	.string "????: Well, well, well. At the end you're\n"
	.string "not as incompetent as I thought.$"

RocketHideout5F_Secundaria_Frank_Texto_2:
	.string "FRANK: What's wrong? Surprised by\n"
	.string "seeing me here?$"

RocketHideout5F_Secundaria_Frank_Texto_3:
	.string "You are not the only one who's getting\n"
	.string "promoted, {PLAYER}. You're now a HIGH\l"
	.string "RANK, as I was back then at MT. MOON.$"

RocketHideout5F_Secundaria_Frank_Texto_4:
	.string "But, as you can see, now I am a ROCKET\n"
	.string "EXECUTIVE. You know what that does\l"
	.string "mean, right?$"

RocketHideout5F_Secundaria_Frank_Texto_5:
	.string "You still are inferior to me, and being\n"
	.string "under my orders. Better to keep the\l"
	.string "respect to me, GRUNT!\p"
	.string "Now get out of my way!$"

RocketHideout5F_Secundaria_Frank_Texto_6:
.string "{PAUSE 20}…{PAUSE 20}$"

RocketHideout5F_Secundaria_Frank_Texto_7:
	.string "Just for a while? Do you really think\n"
	.string "that climbing up in this organization is\l"
	.string "so easy? Between us there is an entire\l"
	.string "world of distance, to be clear.$"

RocketHideout5F_Secundaria_Frank_Texto_8:
	.string "So a bit success has inflated your ego.\n"
	.string "How stupid, considering that you're not\l"
	.string "even the best in your promotion{PAUSE 15}…{PAUSE 15}\p"
	.string "HIGH-RANK ANDRA is a superior TRAINER\n"
	.string "and will achieve greater heights than\l"
	.string "you.$"

RocketHideout5F_Secundaria_Frank_Texto_9:
	.string "Be careful about what you say, kid. As\n"
	.string "EXECUTIVE I had access to POKÉMON of\l"
	.string "an unattainable power that you have\l"
	.string "never seen before. HIGH-RANKS like\l"
	.string "you must conform with the leftovers\l"
	.string "that no one in this region wants, high\l"
	.string "quality leftovers because you are HIGH\l"
	.string "RANK, but leftovers anyway.$"

RocketHideout5F_Secundaria_Frank_Texto_10:
	.string "I will show you what I am talking about.$"

RocketHideout5F_Secundaria_Frank_Texto_11:
	.string "So my defeat at MT. MOON was not a\n"
	.string "coincidence?$"

RocketHideout5F_Secundaria_Frank_Texto_12:
	.string "Do you know what your problem is,\n"
	.string "{PLAYER}?$"

RocketHideout5F_Secundaria_Frank_Texto_13:
	.string "You think you can defeat everyone just\n"
	.string "by battling, and even impose what you\l"
	.string "want just because your POKÉMON\l"
	.string "defeated the rival's POKÉMON.$"

RocketHideout5F_Secundaria_Frank_Texto_14:
	.string "Maybe that could work to be better\n"
	.string "than a common GRUNT, however, in the\l"
	.string "upper circles of TEAM ROCKET, things\l"
	.string "don't work like that, you will need\l"
	.string "something more than just decent\l"
	.string "combat skills if you want to climb up.$"

RocketHideout5F_Secundaria_Frank_Texto_15:
	.string "When I'll get promoted to ADMIN, and\n"
	.string "you'll stay stuck being a HIGH-RANK,\l"
	.string "the first thing I'll do to celebrate\l"
	.string "that, is send you back to gather\l"
	.string "FOSSILS like a low-class GRUNT!$"


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
