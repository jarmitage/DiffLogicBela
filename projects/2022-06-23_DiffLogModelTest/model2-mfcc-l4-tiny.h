#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>

void logic_gate_net(char const *inp, char *out) {
	const char v0 = (char) (inp[8]);
	const char v1 = (char) (~(inp[21] | inp[55]));
	const char v2 = (char) (~(inp[82] & inp[75]));
	const char v3 = (char) (inp[60] & ~inp[46]);
	const char v4 = (char) (inp[38]);
	const char v5 = (char) (inp[70]);
	const char v6 = (char) (inp[73] & ~inp[56]);
	const char v7 = (char) (inp[20]);
	const char v8 = (char) (~(char) 0);
	const char v9 = (char) (inp[77]);
	const char v10 = (char) ((char) 0);
	const char v11 = (char) (inp[48] | inp[81]);
	const char v12 = (char) ((char) 0);
	const char v13 = (char) (inp[18] & ~inp[45]);
	const char v14 = (char) (inp[36] & ~inp[65]);
	const char v15 = (char) (~(inp[12] & inp[16]));
	const char v16 = (char) (~inp[17] | inp[45]);
	const char v17 = (char) (inp[63] ^ inp[51]);
	const char v18 = (char) (~inp[63] | inp[78]);
	const char v19 = (char) (inp[35]);
	const char v20 = (char) ((char) 0);
	const char v21 = (char) (inp[70]);
	const char v22 = (char) (~inp[72] | inp[0]);
	const char v23 = (char) (inp[11] & ~inp[78]);
	const char v24 = (char) (~(char) 0);
	const char v25 = (char) (inp[10]);
	const char v26 = (char) (~(inp[62] & inp[66]));
	const char v27 = (char) (inp[70] | inp[49]);
	const char v28 = (char) (~(inp[67] & inp[27]));
	const char v29 = (char) ((char) 0);
	const char v30 = (char) ((char) 0);
	const char v31 = (char) (~(inp[38] & inp[19]));
	const char v32 = (char) ((char) 0);
	const char v33 = (char) ((char) 0);
	const char v34 = (char) (inp[4] ^ inp[76]);
	const char v35 = (char) (inp[76]);
	const char v36 = (char) ((char) 0);
	const char v37 = (char) (~inp[15]);
	const char v38 = (char) (~(inp[52] | inp[33]));
	const char v39 = (char) (~inp[0]);
	const char v40 = (char) (inp[14]);
	const char v41 = (char) (~inp[40]);
	const char v42 = (char) ((char) 0);
	const char v43 = (char) (~inp[73] | inp[39]);
	const char v44 = (char) ((char) 0);
	const char v45 = (char) (~inp[7]);
	const char v46 = (char) (~inp[64] | inp[25]);
	const char v47 = (char) (~(inp[31] ^ inp[28]));
	const char v48 = (char) (~inp[11] | inp[39]);
	const char v49 = (char) (~(inp[82] | inp[13]));
	const char v50 = (char) (~inp[77]);
	const char v51 = (char) (~(inp[79] ^ inp[12]));
	const char v52 = (char) (inp[35] & ~inp[14]);
	const char v53 = (char) (inp[54] & ~inp[6]);
	const char v54 = (char) (inp[25] & inp[48]);
	const char v55 = (char) ((char) 0);
	const char v56 = (char) (inp[15]);
	const char v57 = (char) (inp[3] & inp[43]);
	const char v58 = (char) (inp[37] ^ inp[21]);
	const char v59 = (char) (~(inp[55] | inp[68]));
	const char v60 = (char) (inp[1] & ~inp[72]);
	const char v61 = (char) (inp[1] ^ inp[38]);
	const char v62 = (char) (inp[17] & inp[71]);
	const char v63 = (char) (inp[43]);
	const char v64 = (char) (inp[83]);
	const char v65 = (char) (~inp[78]);
	const char v66 = (char) (~inp[71]);
	const char v67 = (char) (~(inp[31] | inp[12]));
	const char v68 = (char) (~(inp[31] & inp[65]));
	const char v69 = (char) (~(inp[34] & inp[53]));
	const char v70 = (char) (inp[29] & inp[8]);
	const char v71 = (char) (~(inp[41] ^ inp[80]));
	const char v72 = (char) (inp[44]);
	const char v73 = (char) (~inp[1]);
	const char v74 = (char) (inp[61]);
	const char v75 = (char) (~(inp[32] | inp[23]));
	const char v76 = (char) (inp[6] ^ inp[63]);
	const char v77 = (char) (~(inp[57] | inp[46]));
	const char v78 = (char) (inp[44] & ~inp[60]);
	const char v79 = (char) (~inp[30]);
	const char v80 = (char) (~(char) 0);
	const char v81 = (char) (inp[8] | inp[1]);
	const char v82 = (char) (inp[47] | inp[18]);
	const char v83 = (char) (inp[23] ^ inp[80]);
	const char v84 = (char) (inp[42]);
	const char v85 = (char) (inp[75] ^ inp[25]);
	const char v86 = (char) (inp[51]);
	const char v87 = (char) (~inp[33] | inp[47]);
	const char v88 = (char) ((char) 0);
	const char v89 = (char) (inp[9]);
	const char v90 = (char) (~(inp[35] & inp[37]));
	const char v91 = (char) ((char) 0);
	const char v92 = (char) (~(inp[48] ^ inp[42]));
	const char v93 = (char) (inp[72] & inp[36]);
	const char v94 = (char) (inp[28]);
	const char v95 = (char) (~inp[9]);
	const char v96 = (char) (inp[11] & inp[13]);
	const char v97 = (char) (inp[42]);
	const char v98 = (char) ((char) 0);
	const char v99 = (char) (~(inp[55] | inp[73]));
	const char v100 = (char) (inp[26] ^ inp[24]);
	const char v101 = (char) (~inp[64]);
	const char v102 = (char) (inp[59] ^ inp[11]);
	const char v103 = (char) (~(inp[58] & inp[7]));
	const char v104 = (char) (inp[44] ^ inp[77]);
	const char v105 = (char) (inp[34] & ~inp[15]);
	const char v106 = (char) (inp[7]);
	const char v107 = (char) (inp[77]);
	const char v108 = (char) (~inp[80] | inp[6]);
	const char v109 = (char) (inp[48]);
	const char v110 = (char) (inp[40] & ~inp[64]);
	const char v111 = (char) (inp[61] & inp[61]);
	const char v112 = (char) (inp[21] | inp[57]);
	const char v113 = (char) (inp[26] ^ inp[29]);
	const char v114 = (char) (inp[13]);
	const char v115 = (char) (~inp[42]);
	const char v116 = (char) (inp[10] & inp[79]);
	const char v117 = (char) (inp[80] ^ inp[82]);
	const char v118 = (char) (~(char) 0);
	const char v119 = (char) (~inp[74] | inp[63]);
	const char v120 = (char) (~inp[19]);
	const char v121 = (char) (inp[51] | inp[23]);
	const char v122 = (char) (inp[37] ^ inp[54]);
	const char v123 = (char) (inp[39] & inp[22]);
	const char v124 = (char) (~(char) 0);
	const char v125 = (char) (~(char) 0);
	const char v126 = (char) (~(inp[45] | inp[34]));
	const char v127 = (char) (inp[41] & inp[3]);
	const char v128 = (char) (~inp[69] | inp[37]);
	const char v129 = (char) (~(inp[52] & inp[67]));
	const char v130 = (char) (~inp[44] | inp[54]);
	const char v131 = (char) (inp[3] & ~inp[34]);
	const char v132 = (char) (~(char) 0);
	const char v133 = (char) (~inp[83] | inp[69]);
	const char v134 = (char) (inp[59] ^ inp[60]);
	const char v135 = (char) (~inp[81] | inp[64]);
	const char v136 = (char) (~(inp[57] & inp[17]));
	const char v137 = (char) (inp[70]);
	const char v138 = (char) (inp[13]);
	const char v139 = (char) (~(inp[83] | inp[15]));
	const char v140 = (char) (inp[9]);
	const char v141 = (char) (~(char) 0);
	const char v142 = (char) (~(inp[20] | inp[32]));
	const char v143 = (char) (~inp[78] | inp[45]);
	const char v144 = (char) (inp[47]);
	const char v145 = (char) (inp[7] & ~inp[14]);
	const char v146 = (char) ((char) 0);
	const char v147 = (char) (~(char) 0);
	const char v148 = (char) (inp[19] & inp[62]);
	const char v149 = (char) (~inp[71] | inp[30]);
	const char v150 = (char) ((char) 0);
	const char v151 = (char) (~inp[16]);
	const char v152 = (char) (inp[71]);
	const char v153 = (char) (~(char) 0);
	const char v154 = (char) ((char) 0);
	const char v155 = (char) (inp[28]);
	const char v156 = (char) (~(inp[74] ^ inp[50]));
	const char v157 = (char) (inp[53] & ~inp[58]);
	const char v158 = (char) (~inp[41] | inp[0]);
	const char v159 = (char) (inp[23] & ~inp[38]);
	const char v160 = (char) ((char) 0);
	const char v161 = (char) (inp[72] | inp[59]);
	const char v162 = (char) ((char) 0);
	const char v163 = (char) ((char) 0);
	const char v164 = (char) (~(inp[56] & inp[36]));
	const char v165 = (char) (inp[30] & ~inp[31]);
	const char v166 = (char) (~inp[65] | inp[2]);
	const char v167 = (char) (inp[58]);
	const char v168 = (char) (~(v51 & v131));
	const char v169 = (char) (~v74 | v146);
	const char v170 = (char) (v108 ^ v143);
	const char v171 = (char) (~(v42 & v154));
	const char v172 = (char) (~v23);
	const char v173 = (char) (~v156);
	const char v174 = (char) (v1 & ~v85);
	const char v175 = (char) (~v1);
	const char v176 = (char) (~v166 | v59);
	const char v177 = (char) (v63 & ~v108);
	const char v178 = (char) (v145 & ~v44);
	const char v179 = (char) (v135 & ~v50);
	const char v180 = (char) (v121);
	const char v181 = (char) (v27 ^ v164);
	const char v182 = (char) (~(v92 ^ v60));
	const char v183 = (char) (~v97);
	const char v184 = (char) (v71 ^ v111);
	const char v185 = (char) (v100 & ~v53);
	const char v186 = (char) (v106 & v2);
	const char v187 = (char) (v80);
	const char v188 = (char) (~v147);
	const char v189 = (char) (v15);
	const char v190 = (char) (~v5 | v12);
	const char v191 = (char) ((char) 0);
	const char v192 = (char) (v72);
	const char v193 = (char) (~v120 | v150);
	const char v194 = (char) (v163 ^ v65);
	const char v195 = (char) (~v146);
	const char v196 = (char) (~(v52 | v118));
	const char v197 = (char) (v98 | v144);
	const char v198 = (char) (~v143 | v39);
	const char v199 = (char) (v89);
	const char v200 = (char) (~v97);
	const char v201 = (char) (v79 & ~v19);
	const char v202 = (char) (~v13);
	const char v203 = (char) (v134 | v81);
	const char v204 = (char) (v20 & ~v149);
	const char v205 = (char) (v83 & v165);
	const char v206 = (char) (~(v73 & v167));
	const char v207 = (char) (~(char) 0);
	const char v208 = (char) (v154 & ~v142);
	const char v209 = (char) (v110 & v157);
	const char v210 = (char) (~v157);
	const char v211 = (char) (~v55 | v90);
	const char v212 = (char) (~(v88 & v25));
	const char v213 = (char) (v112 & ~v145);
	const char v214 = (char) (~(v62 | v41));
	const char v215 = (char) (~v33 | v58);
	const char v216 = (char) (v46 | v123);
	const char v217 = (char) (~v65 | v32);
	const char v218 = (char) ((char) 0);
	const char v219 = (char) (~v161 | v40);
	const char v220 = (char) (~(v160 ^ v96));
	const char v221 = (char) (~v16 | v137);
	const char v222 = (char) (v66 | v160);
	const char v223 = (char) (v79 | v68);
	const char v224 = (char) (~(v23 | v136));
	const char v225 = (char) (v5 & ~v110);
	const char v226 = (char) (~v73);
	const char v227 = (char) (v113 | v162);
	const char v228 = (char) (~v128);
	const char v229 = (char) (~v94 | v114);
	const char v230 = (char) (v158);
	const char v231 = (char) (v147 & v0);
	const char v232 = (char) (v161 & ~v88);
	const char v233 = (char) (~v134 | v31);
	const char v234 = (char) (v107);
	const char v235 = (char) (v148 & ~v138);
	const char v236 = (char) ((char) 0);
	const char v237 = (char) (~v35);
	const char v238 = (char) (v141 & v70);
	const char v239 = (char) (~v74 | v126);
	const char v240 = (char) (~v30);
	const char v241 = (char) (v66 & v162);
	const char v242 = (char) (v9);
	const char v243 = (char) (~v30 | v95);
	const char v244 = (char) (~(v91 ^ v139));
	const char v245 = (char) (~(v86 & v24));
	const char v246 = (char) (~v127 | v82);
	const char v247 = (char) (~v90 | v122);
	const char v248 = (char) (v109);
	const char v249 = (char) (v140);
	const char v250 = (char) (~v159 | v26);
	const char v251 = (char) ((char) 0);
	const char v252 = (char) (~v115);
	const char v253 = (char) (~v54);
	const char v254 = (char) (~(v163 & v126));
	const char v255 = (char) (v75 & ~v106);
	const char v256 = (char) (~v152);
	const char v257 = (char) (v47 | v132);
	const char v258 = (char) (v138 | v54);
	const char v259 = (char) (~v158);
	const char v260 = (char) (~v20 | v103);
	const char v261 = (char) ((char) 0);
	const char v262 = (char) (~(v6 & v93));
	const char v263 = (char) (v14 ^ v28);
	const char v264 = (char) (v149);
	const char v265 = (char) (~v48 | v2);
	const char v266 = (char) (v29);
	const char v267 = (char) (~v77);
	const char v268 = (char) (~v60);
	const char v269 = (char) (v167 & v83);
	const char v270 = (char) (~v151);
	const char v271 = (char) (~(v102 & v7));
	const char v272 = (char) (v86);
	const char v273 = (char) (v125);
	const char v274 = (char) (v166 & v43);
	const char v275 = (char) (v103);
	const char v276 = (char) (v119);
	const char v277 = (char) (~v22);
	const char v278 = (char) (~v109);
	const char v279 = (char) ((char) 0);
	const char v280 = (char) (~v129 | v89);
	const char v281 = (char) (~v3 | v87);
	const char v282 = (char) (~(v121 ^ v61));
	const char v283 = (char) (v107 | v116);
	const char v284 = (char) (v84);
	const char v285 = (char) (~v11 | v164);
	const char v286 = (char) (v119 & ~v153);
	const char v287 = (char) (~(v85 ^ v76));
	const char v288 = (char) (v137);
	const char v289 = (char) (~(char) 0);
	const char v290 = (char) (~v105);
	const char v291 = (char) (~v95);
	const char v292 = (char) (v24 | v92);
	const char v293 = (char) (~(v43 | v133));
	const char v294 = (char) (~v56);
	const char v295 = (char) (v82 ^ v96);
	const char v296 = (char) (v38 ^ v87);
	const char v297 = (char) (v59);
	const char v298 = (char) ((char) 0);
	const char v299 = (char) (~(v39 | v94));
	const char v300 = (char) (v21 | v12);
	const char v301 = (char) (~v53);
	const char v302 = (char) (~v37);
	const char v303 = (char) (~v27);
	const char v304 = (char) (~v155);
	const char v305 = (char) (v10 & ~v132);
	const char v306 = (char) (v21 | v104);
	const char v307 = (char) (v151 & v70);
	const char v308 = (char) (~v104);
	const char v309 = (char) (~v49);
	const char v310 = (char) ((char) 0);
	const char v311 = (char) (v80 ^ v155);
	const char v312 = (char) (~v72);
	const char v313 = (char) (v37);
	const char v314 = (char) (v124 ^ v0);
	const char v315 = (char) (~v40 | v142);
	const char v316 = (char) (v4 & ~v128);
	const char v317 = (char) (v56);
	const char v318 = (char) (~(v10 ^ v78));
	const char v319 = (char) (~(v112 ^ v50));
	const char v320 = (char) (~(v105 & v130));
	const char v321 = (char) (~v81);
	const char v322 = (char) (~v115);
	const char v323 = (char) (v152 & ~v101);
	const char v324 = (char) (v116 | v76);
	const char v325 = (char) (v136 & ~v4);
	const char v326 = (char) (~v58 | v165);
	const char v327 = (char) (~(char) 0);
	const char v328 = (char) (~(v148 ^ v64));
	const char v329 = (char) (~v62);
	const char v330 = (char) (~v52 | v102);
	const char v331 = (char) (v124 & v84);
	const char v332 = (char) (v18 & ~v63);
	const char v333 = (char) (v140);
	const char v334 = (char) ((char) 0);
	const char v335 = (char) (v139);
	const char v336 = (char) (~v332);
	const char v337 = (char) (~(v265 | v268));
	const char v338 = (char) (v178);
	const char v339 = (char) (v234 | v215);
	const char v340 = (char) (~v281 | v271);
	const char v341 = (char) (~v181 | v241);
	const char v342 = (char) (v179);
	const char v343 = (char) (~(v229 | v250));
	const char v344 = (char) (v237);
	const char v345 = (char) (v230);
	const char v346 = (char) ((char) 0);
	const char v347 = (char) (v295);
	const char v348 = (char) (~v230);
	const char v349 = (char) (~v293);
	const char v350 = (char) (v294);
	const char v351 = (char) (v243 ^ v192);
	const char v352 = (char) (~v267);
	const char v353 = (char) (~v329);
	const char v354 = (char) (v333 | v180);
	const char v355 = (char) (~v324);
	const char v356 = (char) (~v178);
	const char v357 = (char) (v269 ^ v196);
	const char v358 = (char) (~v263);
	const char v359 = (char) (~v300);
	const char v360 = (char) (v200 & v262);
	const char v361 = (char) (v277);
	const char v362 = (char) (~(char) 0);
	const char v363 = (char) (v197 ^ v335);
	const char v364 = (char) (~(v248 & v320));
	const char v365 = (char) (~v231);
	const char v366 = (char) (v251 & ~v195);
	const char v367 = (char) (v255);
	const char v368 = (char) (v209 | v287);
	const char v369 = (char) (~v288);
	const char v370 = (char) (~(char) 0);
	const char v371 = (char) (~v236 | v177);
	const char v372 = (char) (~(v247 & v261));
	const char v373 = (char) (~(v170 & v324));
	const char v374 = (char) (v318 & v291);
	const char v375 = (char) (v303);
	const char v376 = (char) (~v242);
	const char v377 = (char) (~(v302 | v282));
	const char v378 = (char) (~v179);
	const char v379 = (char) (v192);
	const char v380 = (char) (v173);
	const char v381 = (char) (~v199 | v285);
	const char v382 = (char) (~v270);
	const char v383 = (char) (v273 & v244);
	const char v384 = (char) (v293 & ~v211);
	const char v385 = (char) (~v204 | v309);
	const char v386 = (char) (v200 | v186);
	const char v387 = (char) (~v325);
	const char v388 = (char) ((char) 0);
	const char v389 = (char) (~(v258 | v265));
	const char v390 = (char) ((char) 0);
	const char v391 = (char) (v172 & v276);
	const char v392 = (char) (~(v326 | v170));
	const char v393 = (char) (v284 & ~v313);
	const char v394 = (char) (~v218 | v244);
	const char v395 = (char) (v268);
	const char v396 = (char) (~(v321 & v174));
	const char v397 = (char) (v232 & ~v274);
	const char v398 = (char) (v295);
	const char v399 = (char) (v323 | v279);
	const char v400 = (char) (~(v174 & v314));
	const char v401 = (char) (v171 & ~v183);
	const char v402 = (char) (~v219);
	const char v403 = (char) (v216);
	const char v404 = (char) ((char) 0);
	const char v405 = (char) (~v199 | v328);
	const char v406 = (char) (v296);
	const char v407 = (char) (~(v184 & v226));
	const char v408 = (char) (v278 & v239);
	const char v409 = (char) (v258 & v263);
	const char v410 = (char) (v329);
	const char v411 = (char) (v220 & ~v304);
	const char v412 = (char) (~(v217 | v290));
	const char v413 = (char) (~v190);
	const char v414 = (char) (~v275);
	const char v415 = (char) (~(v245 | v184));
	const char v416 = (char) (v299);
	const char v417 = (char) (~v260);
	const char v418 = (char) (v307 ^ v306);
	const char v419 = (char) (v183 & ~v298);
	const char v420 = (char) (v241);
	const char v421 = (char) (~(v283 | v286));
	const char v422 = (char) (v330 | v331);
	const char v423 = (char) (v291 & ~v322);
	const char v424 = (char) (v266 & ~v261);
	const char v425 = (char) (v213);
	const char v426 = (char) (~(char) 0);
	const char v427 = (char) (v235 ^ v311);
	const char v428 = (char) (v333);
	const char v429 = (char) (v194 & v189);
	const char v430 = (char) (v264);
	const char v431 = (char) (v226);
	const char v432 = (char) (~v314);
	const char v433 = (char) (~v294);
	const char v434 = (char) (~v308);
	const char v435 = (char) (v237 | v193);
	const char v436 = (char) (~(v172 ^ v334));
	const char v437 = (char) (v210 & ~v182);
	const char v438 = (char) (v267 & v197);
	const char v439 = (char) (~v214);
	const char v440 = (char) (~v320);
	const char v441 = (char) (~v296 | v238);
	const char v442 = (char) (~(v169 & v206));
	const char v443 = (char) (~v187);
	const char v444 = (char) (v249 & v224);
	const char v445 = (char) (v191 ^ v328);
	const char v446 = (char) ((char) 0);
	const char v447 = (char) (~(v198 & v182));
	const char v448 = (char) (~v247);
	const char v449 = (char) (v308);
	const char v450 = (char) (~v332);
	const char v451 = (char) (v190 & ~v305);
	const char v452 = (char) (v223);
	const char v453 = (char) (v232 ^ v219);
	const char v454 = (char) (~(v326 | v277));
	const char v455 = (char) (~(char) 0);
	const char v456 = (char) (~v238);
	const char v457 = (char) (~(char) 0);
	const char v458 = (char) (~(char) 0);
	const char v459 = (char) ((char) 0);
	const char v460 = (char) (~(v313 & v176));
	const char v461 = (char) (v305);
	const char v462 = (char) (~v331 | v310);
	const char v463 = (char) (v317);
	const char v464 = (char) (~v203);
	const char v465 = (char) (v257);
	const char v466 = (char) (~(char) 0);
	const char v467 = (char) (~(v321 | v302));
	const char v468 = (char) (~v228 | v319);
	const char v469 = (char) (~v262);
	const char v470 = (char) (~(v279 ^ v221));
	const char v471 = (char) (~v225 | v205);
	const char v472 = (char) (v196 ^ v250);
	const char v473 = (char) (~v327);
	const char v474 = (char) (~(v224 & v275));
	const char v475 = (char) (~(v260 & v325));
	const char v476 = (char) (~v323 | v234);
	const char v477 = (char) (~v319 | v198);
	const char v478 = (char) (v217 & v203);
	const char v479 = (char) (~v210);
	const char v480 = (char) (~v286 | v307);
	const char v481 = (char) ((char) 0);
	const char v482 = (char) (v252);
	const char v483 = (char) (v194 ^ v202);
	const char v484 = (char) (~v283);
	const char v485 = (char) (v318);
	const char v486 = (char) (~v212 | v299);
	const char v487 = (char) (~v240 | v173);
	const char v488 = (char) (v288);
	const char v489 = (char) (v204 ^ v306);
	const char v490 = (char) (~v214);
	const char v491 = (char) (v285 | v330);
	const char v492 = (char) (~v181);
	const char v493 = (char) (v220 & v248);
	const char v494 = (char) (v176 | v312);
	const char v495 = (char) (v185 ^ v186);
	const char v496 = (char) (~v231 | v225);
	const char v497 = (char) (~v168 | v236);
	const char v498 = (char) (v255 | v289);
	const char v499 = (char) (~(v227 & v282));
	const char v500 = (char) (~v188 | v235);
	const char v501 = (char) (~v207 | v221);
	const char v502 = (char) (v171 ^ v297);
	const char v503 = (char) (v270 & ~v256);
	out[0] = (char) (~(char) 0);
	out[1] = (char) (~(char) 0);
	out[2] = (char) (v358 & ~v493);
	out[3] = (char) (~v482);
	out[4] = (char) (~(char) 0);
	out[5] = (char) (~v410);
	out[6] = (char) (~v341);
	out[7] = (char) (v372 & v336);
	out[8] = (char) (~v365);
	out[9] = (char) (v471);
	out[10] = (char) (~(v427 & v446));
	out[11] = (char) (~(v379 | v393));
	out[12] = (char) (v423);
	out[13] = (char) (v409);
	out[14] = (char) ((char) 0);
	out[15] = (char) (~(v492 ^ v384));
	out[16] = (char) (~(v356 ^ v433));
	out[17] = (char) (~(v338 | v498));
	out[18] = (char) (v473 & v427);
	out[19] = (char) (v490 & ~v408);
	out[20] = (char) ((char) 0);
	out[21] = (char) (~(v468 & v430));
	out[22] = (char) ((char) 0);
	out[23] = (char) (v370 ^ v341);
	out[24] = (char) (v385 & ~v358);
	out[25] = (char) (v361);
	out[26] = (char) (~v488 | v376);
	out[27] = (char) (v450 & ~v344);
	out[28] = (char) (~v476);
	out[29] = (char) (~(char) 0);
	out[30] = (char) (v370 & v383);
	out[31] = (char) (v479 & ~v438);
	out[32] = (char) (v409 & v378);
	out[33] = (char) (v399);
	out[34] = (char) (~(v465 & v459));
	out[35] = (char) (~(char) 0);
	out[36] = (char) (v503 & v348);
	out[37] = (char) (v444);
	out[38] = (char) (~v469);
	out[39] = (char) (v438 & ~v463);
	out[40] = (char) (~(v347 | v491));
	out[41] = (char) (~(char) 0);
	out[42] = (char) (v481 | v467);
	out[43] = (char) (v353 & ~v343);
	out[44] = (char) (v470);
	out[45] = (char) (v421);
	out[46] = (char) (v353);
	out[47] = (char) (v377 ^ v377);
	out[48] = (char) (~(v351 | v342));
	out[49] = (char) (v441);
	out[50] = (char) (~v413);
	out[51] = (char) (~v412 | v451);
	out[52] = (char) (~v489);
	out[53] = (char) (v463 & ~v347);
	out[54] = (char) (~v429);
	out[55] = (char) (v500);
	out[56] = (char) (v498 & ~v497);
	out[57] = (char) (v465 & ~v453);
	out[58] = (char) (v397 & v378);
	out[59] = (char) (v459 | v470);
	out[60] = (char) (v483 | v431);
	out[61] = (char) (v381 ^ v464);
	out[62] = (char) (~v395 | v462);
	out[63] = (char) (~(v488 ^ v494));
	out[64] = (char) (~(v404 | v486));
	out[65] = (char) (~v373 | v369);
	out[66] = (char) (v356);
	out[67] = (char) (~v352);
	out[68] = (char) (~v345);
	out[69] = (char) (v363 & ~v411);
	out[70] = (char) (~(char) 0);
	out[71] = (char) (~(v442 & v402));
	out[72] = (char) (~v413);
	out[73] = (char) (v432);
	out[74] = (char) (v351 & ~v367);
	out[75] = (char) (~v349);
	out[76] = (char) (~v345);
	out[77] = (char) (v399 | v374);
	out[78] = (char) (v350);
	out[79] = (char) (v346);
	out[80] = (char) (v474 & ~v371);
	out[81] = (char) (~(v410 & v420));
	out[82] = (char) (v390 ^ v376);
	out[83] = (char) (~v433);
	out[84] = (char) (v401);
	out[85] = (char) (v416 ^ v417);
	out[86] = (char) (v422 & ~v392);
	out[87] = (char) (~v471);
	out[88] = (char) (~v487 | v499);
	out[89] = (char) (~v450);
	out[90] = (char) (v434 & ~v396);
	out[91] = (char) ((char) 0);
	out[92] = (char) (~v350);
	out[93] = (char) (~v478);
	out[94] = (char) (v492);
	out[95] = (char) (~(v348 & v395));
	out[96] = (char) (v340 & ~v448);
	out[97] = (char) (~v340 | v357);
	out[98] = (char) (~v419 | v434);
	out[99] = (char) ((char) 0);
	out[100] = (char) (v355);
	out[101] = (char) (~(v362 | v453));
	out[102] = (char) (v480 & ~v425);
	out[103] = (char) (~(char) 0);
	out[104] = (char) (~v449 | v398);
	out[105] = (char) (v496 | v456);
	out[106] = (char) (v381 & ~v461);
	out[107] = (char) (v397 & v501);
	out[108] = (char) (~v387 | v404);
	out[109] = (char) (v419 | v426);
	out[110] = (char) (~(v385 ^ v407));
	out[111] = (char) (~v400);
	out[112] = (char) (v435 & v446);
	out[113] = (char) (~v349 | v496);
	out[114] = (char) (v355 & v468);
	out[115] = (char) (~v405 | v486);
	out[116] = (char) (~v360);
	out[117] = (char) (~(v455 ^ v414));
	out[118] = (char) (~v467);
	out[119] = (char) (v501 ^ v389);
	out[120] = (char) (~v364 | v482);
	out[121] = (char) (~(v444 & v460));
	out[122] = (char) (~v441 | v401);
	out[123] = (char) ((char) 0);
	out[124] = (char) (v411 ^ v393);
	out[125] = (char) (v414 & ~v391);
	out[126] = (char) (~(v369 | v425));
	out[127] = (char) ((char) 0);
	out[128] = (char) (v502 & ~v478);
	out[129] = (char) (~v406 | v418);
	out[130] = (char) (v415 & ~v390);
	out[131] = (char) (~(char) 0);
	out[132] = (char) (~v359);
	out[133] = (char) (~(v424 | v361));
	out[134] = (char) (v389 ^ v382);
	out[135] = (char) (~v375);
	out[136] = (char) (v436 & ~v386);
	out[137] = (char) (v461 | v354);
	out[138] = (char) (~v421);
	out[139] = (char) (~v359);
	out[140] = (char) (v339 & ~v477);
	out[141] = (char) (v466 & v344);
	out[142] = (char) (~v484 | v454);
	out[143] = (char) (~(v379 | v472));
	out[144] = (char) (v428 & ~v366);
	out[145] = (char) (~(v452 ^ v466));
	out[146] = (char) (v448);
	out[147] = (char) (v392 & ~v481);
	out[148] = (char) (v415);
	out[149] = (char) (~v339 | v484);
	out[150] = (char) (~v485);
	out[151] = (char) (~(v383 | v462));
	out[152] = (char) (~v451);
	out[153] = (char) (~v375);
	out[154] = (char) (~v458);
	out[155] = (char) (~v428);
	out[156] = (char) (v476);
	out[157] = (char) (~v480 | v429);
	out[158] = (char) (~(v367 & v445));
	out[159] = (char) (~v475);
	out[160] = (char) (~v403 | v416);
	out[161] = (char) (~v440);
	out[162] = (char) (~v499);
	out[163] = (char) (v365 & v372);
	out[164] = (char) (~v457);
	out[165] = (char) (~(v493 | v420));
	out[166] = (char) (v456);
	out[167] = (char) (~v396);
}

void apply_logic_gate_net (bool const *inp, int *out, size_t len) {
    char *inp_temp = (char*)malloc(84*sizeof(char));
    char *out_temp = (char*)malloc(168*sizeof(char));
    char *out_temp_o = (char*)malloc(7*sizeof(char));
    
    for(size_t i = 0; i < len; ++i) {
    
        // Converting the bool array into a bitpacked array
        for(size_t d = 0; d < 84; ++d) {
            char res = (char) 0;
            for(size_t b = 0; b < 8; ++b) {
                res <<= 1;
                res += !!(inp[i * 84 * 8 + (8 - b - 1) * 84 + d]);
            }
            inp_temp[d] = res;
        }
    
        // Applying the logic gate net
        logic_gate_net(inp_temp, out_temp);
        
        // GroupSum of the results via logic gate networks
        for(size_t c = 0; c < 2; ++c) {  // for each class
            // Initialize the output bits
            for(size_t d = 0; d < 7; ++d) {
                out_temp_o[d] = (char) 0;
            }
            
            // Apply the adder logic gate network
            for(size_t a = 0; a < 84; ++a) {
                char carry = out_temp[c * 84 + a];
                char out_temp_o_d;
                for(int d = 7 - 1; d >= 0; --d) {
                    out_temp_o_d  = out_temp_o[d];
                    out_temp_o[d] = carry ^ out_temp_o_d;
                    carry         = carry & out_temp_o_d;
                }
            }
            
            // Unpack the result bits
            for(size_t b = 0; b < 8; ++b) {
                const char bit_mask = (char) 1 << b;
                int res = 0;
                for(size_t d = 0; d < 7; ++d) {
                    res <<= 1;
                    res += !!(out_temp_o[d] & bit_mask);
                }
                out[(i * 8 + b) * 2 + c] = res;
            }
        }
    }
    free(inp_temp);
    free(out_temp);
    free(out_temp_o);
}

int process(std::vector<double> mfccs, int numMFCCs) {
    bool modelInputs[84];
    size_t bitCounter=0;
    for(size_t i=0; i < numMFCCs; i++) {
        // rescale 0-127
		// pre-scaling to 7-bit range
        // double inVal = (*in(i) + 68.438636779785) / 189.473068237305 * 127.0;
		double inVal = (mfccs[i] + 68.438636779785) / 189.473068237305 * 127.0;
        size_t inInt = static_cast<size_t>(inVal);
        for(size_t bit = 0; bit < 7; bit++) {
            modelInputs[bitCounter] = inInt & 1;
            bitCounter++;
            inInt = inInt >> 1;
        }
    }

    int modelOutputs[2];

    apply_logic_gate_net(&modelInputs[0], &modelOutputs[0], 1);

    int out = modelOutputs[0] > modelOutputs[1] ? 0 : 1;
	return out;
}

