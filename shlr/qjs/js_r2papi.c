static const char *const js_r2papi_qjs = "" \
  "Object.defineProperty(G,\"__esModule\",{value:!0}),G.Base64=G.N"\
  "ativePointer=G.R2Papi=G.Assembler=void 0;const shell_js_1=G;G"\
  ".Assembler=class{constructor(t){this.program=\"\",this.labels={"\
  "},this.endian=!1,this.pc=0,this.r2=null,this.r2=void 0===t?G."\
  "r2:t,this.program=\"\",this.labels={}}setProgramCounter(t){this"\
  ".pc=t}setEndian(t){this.endian=t}toString(){return this.progr"\
  "am}append(t){this.pc+=t.length/2,this.program+=t}label(t){var"\
  " s=this.pc;return this.labels[t]=this.pc,s}asm(t){let s=this."\
  "r2.cmd('\"\"pa '+t).trim();s.length<16||(s=\"____\",console.error"\
  "(\"Invalid instruction: \"+t)),this.append(s)}};G.R2Papi=class{"\
  "constructor(t){this.r2=t}jsonToTypescript(t,s){let e=`interfa"\
  "ce ${t} {\n`;s.length&&0<s.length&&(s=s[0]);for(let t of Objec"\
  "t.keys(s))e+=`    ${t}: ${typeof s[t]};\n`;return e+`}\n`}newMa"\
  "p(t,s,e,i,r,n=\"\"){this.cmd(`om ${t} ${s} ${e} ${i} ${r} `+n)}"\
  "at(t){return new NativePointer(t)}getShell(){return new shell"\
  "_js_1.R2PapiShell(this)}version(){return this.r2.cmd(\"?Vq\").t"\
  "rim()}platform(){return this.r2.cmd(\"uname\").trim()}arch(){re"\
  "turn this.r2.cmd(\"uname -a\").trim()}bits(){return this.r2.cmd"\
  "(\"uname -b\").trim()}id(){return+this.r2.cmd(\"?vi:$p\")}printAt"\
  "(t,s,e){}clearScreen(){return this.r2.cmd(\"!clear\"),this}getC"\
  "onfig(t){return this.r2.call(\"e \"+t).trim()}setConfig(t,s){re"\
  "turn this.r2.call(\"e \"+t+\"=\"+s),this}getRegisters(){return th"\
  "is.cmdj(\"drj\")}resizeFile(t){return this.cmd(\"r \"+t),this}ins"\
  "ertNullBytes(t,s){return this.cmd(`r+${t}@`+(s=void 0===s?\"$$"\
  "\":s)),this}removeBytes(t,s){return this.cmd(`r-${t}@`+(s=void"\
  " 0===s?\"$$\":s)),this}seek(t){return this.cmd(\"s \"+t),this}get"\
  "BlockSize(){return+this.cmd(\"b\")}setBlockSize(t){return this."\
  "cmd(\"b \"+t),this}countFlags(){return Number(this.cmd(\"f~?\"))}"\
  "countFunctions(){return Number(this.cmd(\"aflc\"))}analyzeProgr"\
  "am(t){switch(t=void 0===t?0:t){case 0:this.cmd(\"aa\");break;ca"\
  "se 1:this.cmd(\"aaa\");break;case 2:this.cmd(\"aaaa\");break;case"\
  " 3:this.cmd(\"aaaaa\")}return this}enumerateThreads(){return[{c"\
  "ontext:this.cmdj(\"drj\"),id:0,state:\"waiting\",selected:!0}]}cu"\
  "rrentThreadId(){return+this.cmd(\"e cfg.debug\")?+this.cmd(\"dpt"\
  ".\"):this.id()}setRegisters(t){for(var s of Object.keys(t)){va"\
  "r e=t[s];this.r2.cmd(\"dr \"+s+\"=\"+e)}}hex(t){return this.r2.cm"\
  "d(\"?v \"+t).trim()}step(){return this.r2.cmd(\"ds\"),this}stepOv"\
  "er(){return this.r2.cmd(\"dso\"),this}math(t){return+this.r2.cm"\
  "d(\"?v \"+t)}stepUntil(t){this.cmd(\"dsu \"+t)}enumerateXrefsTo(t"\
  "){return this.call(\"axtq \"+t).trim().split(/\\n/)}findXrefsTo("\
  "t,s){s?this.call(\"/r \"+t):this.call(\"/re \"+t)}findFunctionsFr"\
  "omCalls(){this.call(\"aac\")}findFunctionsWithPreludes(){this.c"\
  "all(\"aap\")}searchDisasm(t){return this.callj(\"/ad \"+t)}search"\
  "String(t){return this.cmdj(\"/j \"+t)}searchBytes(t){t=t.map(fu"\
  "nction(t){return(255&t).toString(16)}).join(\"\");return this.c"\
  "mdj(\"/xj \"+t)}binInfo(){try{return this.cmdj(\"ij~{bin}\")}catc"\
  "h(t){return{}}}selectBinary(t){this.call(\"ob \"+t)}openFile(t)"\
  "{this.call(\"o \"+t)}enumeratePlugins(t){switch(t){case\"bin\":re"\
  "turn this.callj(\"Lij\");case\"io\":return this.callj(\"Loj\");case"\
  "\"core\":return this.callj(\"Lcj\");case\"anal\":return this.callj("\
  "\"Laj\");case\"lang\":return this.callj(\"Llj\")}return[]}enumerate"\
  "Modules(){return this.callj(\"dmmj\")}enumerateFiles(){return t"\
  "his.callj(\"oj\")}enumerateBinaries(){return this.callj(\"obj\")}"\
  "enumerateMaps(){return this.callj(\"omj\")}enumerateSymbols(){r"\
  "eturn this.callj(\"isj\")}enumerateExports(){return this.callj("\
  "\"iEj\")}enumerateImports(){return this.callj(\"iij\")}enumerateL"\
  "ibraries(){return this.callj(\"ilj\")}enumerateSections(){retur"\
  "n this.callj(\"iSj\")}enumerateSegments(){return this.callj(\"iS"\
  "Sj\")}enumerateEntrypoints(){return this.callj(\"iej\")}enumerat"\
  "eRelocations(){return this.callj(\"irj\")}enumerateFunctions(){"\
  "return this.cmdj(\"aflj\")}enumerateFlags(){return this.cmdj(\"f"\
  "j\")}skip(){this.r2.cmd(\"dss\")}ptr(t){return new NativePointer"\
  "(t,this)}call(t){return this.r2.call(t)}callj(t){return JSON."\
  "parse(this.call(t))}cmd(t){return this.r2.cmd(t)}cmdj(t){retu"\
  "rn JSON.parse(this.cmd(t))}log(t){return this.r2.log(t)}clipp"\
  "y(t){this.r2.log(this.r2.cmd(\"?E \"+t))}ascii(t){this.r2.log(t"\
  "his.r2.cmd(\"?ea \"+t))}};class NativePointer{constructor(t,s){"\
  "this.api=void 0===s?G.R:s,this.addr=(\"\"+t).trim()}hexdump(t){"\
  "return this.api.cmd(`x${void 0===t?\"\":\"\"+t}@`+this.addr)}func"\
  "tionGraph(t){return\"dot\"===t?this.api.cmd(\"agfd@ \"+this.addr)"\
  ":\"json\"===t?this.api.cmd(\"agfj@\"+this.addr):\"mermaid\"===t?thi"\
  "s.api.cmd(\"agfm@\"+this.addr):this.api.cmd(\"agf@\"+this.addr)}r"\
  "eadByteArray(t){return JSON.parse(this.api.cmd(`p8j ${t}@`+th"\
  "is.addr))}and(t){return this.addr=this.api.call(`?v ${this.ad"\
  "dr} & `+t).trim(),this}or(t){return this.addr=this.api.call(`"\
  "?v ${this.addr} | `+t).trim(),this}add(t){return this.addr=th"\
  "is.api.call(`?v ${this.addr}+`+t).trim(),this}sub(t){return t"\
  "his.addr=this.api.call(`?v ${this.addr}-`+t).trim(),this}writ"\
  "eByteArray(t){return this.api.cmd(\"wx \"+t.join(\"\")),this}writ"\
  "eAssembly(t){return this.api.cmd(`\"wa ${t} @ `+this.addr),thi"\
  "s}writeCString(t){return this.api.call(\"w \"+t),this}isNull(){"\
  "return 0==+this.addr}compare(t){return(t=\"string\"!=typeof t&&"\
  "\"number\"!=typeof t?t:new NativePointer(t)).addr===this.addr}p"\
  "ointsToNull(){return this.readPointer().compare(0)}toString()"\
  "{return this.addr.trim()}writePointer(t){var s=64==+this.api."\
  "getConfig(\"asm.bits\")?\"wv8\":\"wv4\";this.api.cmd(s+` ${t}@`+thi"\
  "s)}readPointer(){return 64==+this.api.getConfig(\"asm.bits\")?n"\
  "ew NativePointer(this.api.call(\"pv8@\"+this.addr)):new NativeP"\
  "ointer(this.api.call(\"pv4@\"+this.addr))}readU8(){return+this."\
  "api.cmd('pv1@\"'+this.addr)}readU16(){return+this.api.cmd('pv2"\
  "@\"'+this.addr)}readU32(){return+this.api.cmd('pv4@\"'+this.add"\
  "r)}readU64(){return+this.api.cmd('pv8@\"'+this.addr)}writeInt("\
  "t){return+this.api.cmd(`wv4 ${t}@`+this.addr)}writeU8(t){retu"\
  "rn this.api.cmd(`wv1 ${t}@`+this.addr),!0}writeU16(t){return "\
  "this.api.cmd(`wv2 ${t}@`+this.addr),!0}writeU32(t){return thi"\
  "s.api.cmd(`wv4 ${t}@`+this.addr),!0}writeU64(t){return this.a"\
  "pi.cmd(`wv8 ${t}@`+this.addr),!0}readInt(){return+this.api.cm"\
  "d('pv4@\"'+this.addr)}readCString(){return JSON.parse(this.api"\
  ".cmd(\"psj@\"+this.addr)).string}instruction(){return this.api."\
  "cmdj(\"aoj@\"+this.addr)[0]}disassemble(t){return this.api.cmd("\
  "`pd ${void 0===t?\"\":\"\"+t}@`+this.addr)}analyzeFunction(){retu"\
  "rn this.api.cmd(\"af@\"+this.addr),this}analyzeFunctionRecursiv"\
  "ely(){return this.api.cmd(\"afr@\"+this.addr),this}name(){retur"\
  "n this.api.cmd(\"fd \"+this.addr).trim()}basicBlock(){return th"\
  "is.api.cmdj(\"abj@\"+this.addr)}functionBasicBlocks(){return th"\
  "is.api.cmdj(\"afbj@\"+this.addr)}xrefs(){return this.api.cmdj(\""\
  "axtj@\"+this.addr)}}G.NativePointer=NativePointer;G.Base64=cla"\
  "ss{static encode(t){return(0,G.b64)(t)}static decode(t){retur"\
  "n(0,G.b64)(t,!0)}},Object.defineProperty(G,\"__esModule\",{valu"\
  "e:!0}),G.R2PapiShell=void 0;G.R2PapiShell=class{constructor(t"\
  "){this.rp=t}mkdir(t,s){return!0===s?this.rp.call(\"mkdir -p \"+"\
  "t):this.rp.call(\"mkdir \"+t),!0}unlink(t){return this.rp.call("\
  "\"rm \"+t),!0}chdir(t){return this.rp.call(\"cd \"+t),!0}ls(){ret"\
  "urn this.rp.call(\"ls -q\").trim().split(\"\\n\")}fileExists(t){re"\
  "turn!1}open(t){this.rp.call(\"open \"+t)}system(t){return this."\
  "rp.call(\"!\"+t),0}run(t){return this.rp.call(\"rm \"+t),0}mount("\
  "t,s){return this.rp.call(`m ${t} `+s),!0}umount(t){this.rp.ca"\
  "ll(\"m-\"+t)}chdir2(t){return this.rp.call(\"mdq \"+(t=void 0===t"\
  "?\"/\":t)),!0}ls2(t){return this.rp.call(\"mdq \"+(t=void 0===t?\""\
  "/\":t)).trim().split(\"\\n\")}enumerateMountpoints(){return this."\
  "rp.cmdj(\"mlj\")}isSymlink(t){return!1}isDirectory(t){return!1}"\
  "},Object.defineProperty(G,\"__esModule\",{value:!0}),G.EsilPars"\
  "er=G.EsilNode=G.EsilToken=void 0;class EsilToken{constructor("\
  "t=\"\",s=0){this.label=\"\",this.comment=\"\",this.text=\"\",this.add"\
  "r=\"0\",this.position=0,this.text=t,this.position=s}toString(){"\
  "return this.text}}G.EsilToken=EsilToken;class EsilNode{constr"\
  "uctor(t=new EsilToken,s){this.type=\"none\",this.token=t,this.c"\
  "hildren=[]}setSides(t,s){this.lhs=t,this.rhs=s}addChildren(t,"\
  "s){void 0!==t&&this.children.push(t),void 0!==s&&this.childre"\
  "n.push(s)}toEsil(){if(void 0===this.lhs||void 0===this.rhs)re"\
  "turn\"\";{let t=this.lhs.toEsil();return\"\"!==t&&(t+=\",\"),this.r"\
  "hs.toEsil()+\",\"+t+this.token}}toString(){let t=\"\";if(\"\"!==thi"\
  "s.token.label&&(t+=this.token.label+\":\\n\"),this.token.addr,\"\""\
  "!==this.token.comment&&(t+=\"/*\"+this.token.comment+\"*/\\n\"),\"G"\
  "OTO\"===this.token.toString()&&(0<this.children.length?t+=\"got"\
  "o label_\"+this.children[0].token.position+\";\\n\":t+=`goto labe"\
  "l_0;\n`),0<this.children.length){t+=`  (if (${this.rhs})\n`;for"\
  "(var s of this.children)null!==s&&\"\"!=(s=s.toString())&&(t+=`"\
  "  ${s}\n`);t+=\"  )\\n\"}return void 0!==this.lhs&&void 0!==this."\
  "rhs?t+`    ( ${this.lhs} ${this.token} ${this.rhs} )`:t+this."\
  "token.toString()}}G.EsilNode=EsilNode;G.EsilParser=class{cons"\
  "tructor(t){this.cur=0,this.r2=t,this.cur=0,this.stack=[],this"\
  ".nodes=[],this.tokens=[],this.root=new EsilNode(new EsilToken"\
  "(\"function\",0),\"block\")}toJSON(){if(0<this.stack.length)throw"\
  " new Error(\"The ESIL stack is not empty\");return JSON.stringi"\
  "fy(this.root,null,2)}toEsil(){return this.nodes.map(t=>t.toEs"\
  "il()).join(\",\")}optimizeFlags(t){void 0!==t.rhs&&this.optimiz"\
  "eFlags(t.rhs),void 0!==t.lhs&&this.optimizeFlags(t.lhs);for(l"\
  "et s=0;s<t.children.length;s++)this.optimizeFlags(t.children["\
  "s]);var s=t.toString();4096<+s&&\"\"!=(s=r2.cmd(\"fd.@ \"+s).trim"\
  "().split(\"\\n\")[0].trim())&&-1===s.indexOf(\"+\")&&(t.token.text"\
  "=s)}optimize(t){-1!=t.indexOf(\"flag\")&&this.optimizeFlags(thi"\
  "s.root)}toString(){return this.root.children.map(t=>t.toStrin"\
  "g()).join(\";\\n\")}reset(){this.nodes=[],this.stack=[],this.tok"\
  "ens=[],this.cur=0,this.root=new EsilNode(new EsilToken(\"funct"\
  "ion\",0),\"block\")}parseRange(t,s){let e=t;for(;e<this.tokens.l"\
  "ength&&e<s;){const t=this.peek(e);if(!t)break;this.cur=e,this"\
  ".pushToken(t),e=this.cur,e++}}parseFunction(t){var s=this;var"\
  " i=r2.cmd(\"?v $$\").trim(),r=(void 0===t&&(t=i),r2.cmdj(\"afbj@"\
  "\"+t));for(let t of r)r2.cmd(\"s \"+t.addr),function(t){const e="\
  "r2.cmd(\"pie \"+t+\" @e:scr.color=0\").trim().split(\"\\n\");for(con"\
  "st t of e)if(0===t.length)console.log(\"Empty\");else{const e=t"\
  ".split(\" \");1<e.length&&(r2.cmd(\"s \"+e[0]),s.parse(e[1],e[0])"\
  ",s.optimize(\"flags,labels\"))}}(t.ninstr);r2.cmd(\"s \"+i)}parse"\
  "(t,s){const e=t.trim().split(\",\").map(t=>t.trim()),i=this.tok"\
  "ens.length;for(let t of e){const e=new EsilToken(t,this.token"\
  "s.length);void 0!==s&&(e.addr=s),this.tokens.push(e)}t=this.t"\
  "okens.length;this.parseRange(i,t)}peek(t){return this.tokens["\
  "t]}pushToken(t){if(this.isNumber(t)){var s=new EsilNode(t,\"nu"\
  "mber\");this.stack.push(s),this.nodes.push(s)}else if(this.isI"\
  "nternal(t)){const s=new EsilNode(t,\"flag\");this.stack.push(s)"\
  ",this.nodes.push(s)}else if(!this.isOperation(t)){const s=new"\
  " EsilNode(t,\"register\");this.stack.push(s),this.nodes.push(s)"\
  "}}isNumber(t){return!!t.toString().startsWith(\"0\")||0<+t}isIn"\
  "ternal(t){t=t.toString();return t.startsWith(\"$\")&&1<t.length"\
  "}parseUntil(t){t+=1;let e=t;const i=[],r=this.nodes.length;fo"\
  "r(this.stack.forEach(t=>i.push(t));e<this.tokens.length;){con"\
  "st t=this.peek(e);if(!t)break;if(\"}\"===t.toString())break;if("\
  "\"}{\"===t.toString())break;e++}this.stack=i;var n=e;return thi"\
  "s.parseRange(t,n),this.nodes.length==r?null:this.nodes[this.n"\
  "odes.length-1]}getNodeFor(t){if(void 0!==this.peek(t)){for(va"\
  "r s of this.nodes)if(s.token.position===t)return s;this.nodes"\
  ".push(new EsilNode(new EsilToken(\"label\",t),\"label\"))}return "\
  "null}findNodeFor(t){for(var s of this.nodes)if(s.token.positi"\
  "on===t)return s;return null}isOperation(t){switch(t.toString("\
  ")){case\"[1]\":case\"[2]\":case\"[4]\":case\"[8]\":if(!(1<=this.stack"\
  ".length))throw new Error(\"Stack needs more items\");{const t=t"\
  "his.stack.pop();new EsilNode(t.token,\"operation\"),this.stack."\
  "push(t)}return!0;case\"!\":var s,e,i;if(1<=this.stack.length)re"\
  "turn s=new EsilNode(new EsilToken(\"\",t.position),\"none\"),e=th"\
  "is.stack.pop(),(i=new EsilNode(t,\"operation\")).setSides(s,e),"\
  "this.stack.push(i),!0;throw new Error(\"Stack needs more items"\
  "\");case\"\":case\"}\":case\"}{\":return!0;case\"DUP\":{if(this.stack."\
  "length<1)throw new Error(\"goto cant pop\");const t=this.stack."\
  "pop();this.stack.push(t),this.stack.push(t)}return!0;case\"GOT"\
  "O\":if(null!==this.peek(t.position-1)){if(this.stack.length<1)"\
  "throw new Error(\"goto cant pop\");const s=this.stack.pop();if("\
  "null!==s){const e=0|+s.toString();if(0<e){const s=this.peek(e"\
  ");if(void 0!==s){s.label=\"label_\"+e,s.comment=\"hehe\";const i="\
  "new EsilNode(t,\"goto\"),r=this.getNodeFor(s.position);null!=r&"\
  "&i.children.push(r),this.root.children.push(i)}else console.e"\
  "rror(\"Cannot find goto node\")}else console.error(\"Cannot find"\
  " dest node for goto\")}}return!0;case\"?{\":if(!(1<=this.stack.l"\
  "ength))throw new Error(\"Stack needs more items\");{const s=new"\
  " EsilNode(new EsilToken(\"if\",t.position),\"none\"),e=this.stack"\
  ".pop(),i=new EsilNode(t,\"operation\");i.setSides(s,e);let r=th"\
  "is.parseUntil(t.position),n=null;null!==r&&(i.children.push(r"\
  "),this.nodes.push(r),null!==(n=this.parseUntil(r.token.positi"\
  "on+1)))&&(i.children.push(n),this.nodes.push(n)),this.nodes.p"\
  "ush(i),this.root.children.push(i),null!==n&&(this.cur=n.token"\
  ".position)}return!0;case\"-\":if(!(2<=this.stack.length))throw "\
  "new Error(\"Stack needs more items\");{const s=this.stack.pop()"\
  ",e=this.stack.pop(),i=new EsilNode(t,\"operation\");i.setSides("\
  "s,e),this.stack.length,this.stack.push(i),this.nodes.push(i)}"\
  "return!0;case\"<\":case\">\":case\"^\":case\"&\":case\"|\":case\"+\":case"\
  "\"*\":case\"/\":case\">>=\":case\"<<=\":case\">>>=\":case\"<<<=\":case\">>"\
  ">>=\":case\"<<<<=\":if(!(2<=this.stack.length))throw new Error(\""\
  "Stack needs more items\");{const s=this.stack.pop(),e=this.sta"\
  "ck.pop(),i=new EsilNode(t,\"operation\");i.setSides(s,e),this.s"\
  "tack.length,this.stack.push(i),this.nodes.push(i)}return!0;ca"\
  "se\"=\":case\":=\":case\"-=\":case\"+=\":case\"==\":case\"=[1]\":case\"=[2"\
  "]\":case\"=[4]\":case\"=[8]\":if(!(2<=this.stack.length))throw new"\
  " Error(\"Stack needs more items\");{const s=this.stack.pop(),e="\
  "this.stack.pop(),i=new EsilNode(t,\"operation\");i.setSides(s,e"\
  "),0===this.stack.length&&this.root.children.push(i),this.node"\
  "s.push(i)}return!0}return!1}};\n";
