/* FUN_1801cbac0 @ 1801cbac0 */

longlong FUN_1801cbac0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    uVar1 = *param_1;
    cVar4 = FUN_1801f0c50(uVar1);
    while (cVar4 != '\0') {
      lVar5 = FUN_1801d6710(0x28,"fmt error\n",9);
      switch((uint)lVar5 & 3) {
      case 0:
        if (*(char *)(lVar5 + 0x10) != '#') {
          return lVar5;
        }
        break;
      case 1:
        if (*(char *)(lVar5 + 0xf) != '#') {
          return lVar5;
        }
        uVar2 = *(undefined8 *)(lVar5 + -1);
        puVar3 = *(undefined8 **)(lVar5 + 7);
        if ((code *)*puVar3 != (code *)0x0) {
          (*(code *)*puVar3)(uVar2);
        }
        if (puVar3[1] != 0) {
          thunk_FUN_1801d3330(uVar2,puVar3[1],puVar3[2]);
        }
        thunk_FUN_1801d3330(lVar5 + -1,0x18,8);
        break;
      case 2:
        goto switchD_1801cbb52_caseD_2;
      case 3:
        if ((int)((ulonglong)lVar5 >> 0x20) != 0x23) {
          return lVar5;
        }
      }
      cVar4 = FUN_1801f0c50(uVar1,param_2,param_3);
    }
  }
  lVar5 = 0;
switchD_1801cbb52_caseD_2:
  return lVar5;
}


