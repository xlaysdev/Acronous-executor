/* FUN_18009a3a0 @ 18009a3a0 */

longlong FUN_18009a3a0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined8 uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  lVar3 = *(longlong *)(param_1 + 0x22);
  if (SBORROW8(0,lVar3)) {
    plVar1 = *(longlong **)(param_1 + 0x2a);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(param_1 + 0x2a);
    }
    lVar4 = *(longlong *)(param_1 + 0x24);
    lVar2 = -lVar4;
    piVar7 = param_1;
    if ((SBORROW8(0,lVar4)) || (lVar4 == 0)) goto LAB_18009a4b4;
    lVar3 = *(longlong *)(param_1 + 0x26);
    uVar6 = 1;
  }
  else {
    FUN_18009b360(param_1 + 0x2e);
    FUN_18009b360(param_1 + 0x50);
    piVar7 = param_1;
    if (lVar3 != 0) {
      thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x24),lVar3 * 0x12,1);
    }
    lVar3 = *(longlong *)(param_1 + 0x2a);
    lVar2 = *(longlong *)(param_1 + 0x2c);
    if (lVar2 != 0) {
      puVar5 = (undefined8 *)(lVar3 + 8);
      do {
        if (puVar5[-1] != 0) {
          thunk_FUN_1801d3330(*puVar5,puVar5[-1],1);
        }
        puVar5 = puVar5 + 3;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    lVar2 = 0;
    if (*(longlong *)(param_1 + 0x28) == 0) goto LAB_18009a4b4;
    lVar4 = *(longlong *)(param_1 + 0x28) * 0x18;
    uVar6 = 8;
  }
  lVar2 = thunk_FUN_1801d3330(lVar3,lVar4,uVar6,param_4,piVar7,uVar8);
LAB_18009a4b4:
  if ((char)param_1[0x20] != '\x02') {
    lVar2 = (**(code **)(*(longlong *)(piVar7 + 0x18) + 0x20))
                      (*(undefined8 *)(piVar7 + 0x1e),*(undefined8 *)(piVar7 + 0x1a),
                       *(undefined8 *)(piVar7 + 0x1c));
  }
  if (*piVar7 == 3) {
    return lVar2;
  }
  lVar3 = FUN_18009a670();
  return lVar3;
}


