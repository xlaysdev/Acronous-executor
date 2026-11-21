/* FUN_1801ce850 @ 1801ce850 */

void FUN_1801ce850(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 local_4a;
  char local_49;
  undefined4 local_48;
  char local_44;
  char local_43;
  
  uVar3 = *param_1;
  lVar4 = FUN_1801cbac0(uVar3,"\"",1);
  while( true ) {
    if (lVar4 != 0) {
      return;
    }
    lVar6 = 0;
    do {
      lVar4 = lVar6;
      if (param_4 == lVar4) {
        if ((param_4 == 0) || (lVar4 = FUN_1801cbac0(uVar3,param_3,param_4), lVar4 == 0)) {
          FUN_1801cbac0(uVar3,"\"",1);
          return;
        }
        return;
      }
      bVar1 = *(byte *)(param_3 + lVar4);
      cVar2 = "uuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar1];
      lVar6 = lVar4 + 1;
    } while (cVar2 == '\0');
    if ((lVar6 != 1) && (lVar4 = FUN_1801cbac0(uVar3,param_3,lVar4), lVar4 != 0)) break;
    if (cVar2 == 'u') {
      local_44 = "0123456789abcdef"[bVar1 >> 4];
      local_43 = "0123456789abcdef"[bVar1 & 0xf];
      local_48 = 0x3030755c;
      uVar7 = 6;
      puVar5 = &local_48;
    }
    else {
      local_4a = 0x5c;
      uVar7 = 2;
      puVar5 = (undefined4 *)&local_4a;
      local_49 = cVar2;
    }
    lVar4 = FUN_1801cbac0(uVar3,puVar5,uVar7);
    param_3 = param_3 + lVar6;
    param_4 = param_4 - lVar6;
  }
  return;
}


