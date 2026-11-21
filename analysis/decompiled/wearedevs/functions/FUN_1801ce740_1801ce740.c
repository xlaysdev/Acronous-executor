/* FUN_1801ce740 @ 1801ce740 */

longlong FUN_1801ce740(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = *puVar1;
  if ((char)param_1[1] == '\x01') {
    lVar5 = FUN_1801cbac0(uVar2,"\n",1);
  }
  else {
    lVar5 = FUN_1801cbac0(uVar2,",\n",2);
  }
  if (lVar5 == 0) {
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    lVar6 = puVar1[3] + 1;
    do {
      lVar6 = lVar6 + -1;
      if (lVar6 == 0) {
        *(undefined1 *)(param_1 + 1) = 2;
        lVar5 = FUN_1801ce850(puVar1);
        if ((lVar5 == 0) && (lVar5 = FUN_1801cbac0(*puVar1,": ",2), lVar5 == 0)) {
          lVar5 = FUN_1801ce980(param_3,puVar1);
          if (lVar5 == 0) {
            *(undefined1 *)(puVar1 + 4) = 1;
            lVar5 = 0;
          }
          return lVar5;
        }
        break;
      }
      lVar5 = FUN_1801cbac0(uVar2,uVar3,uVar4);
    } while (lVar5 == 0);
  }
  lVar5 = FUN_1801ff6a0(lVar5);
  return lVar5;
}


