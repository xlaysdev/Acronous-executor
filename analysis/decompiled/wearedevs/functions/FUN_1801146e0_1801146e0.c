/* FUN_1801146e0 @ 1801146e0 */

void FUN_1801146e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x80) == 1) {
    uVar1 = *(uint *)(param_1 + 0x88);
  }
  else {
    if ((int)*(longlong *)(param_1 + 0x80) != 2) goto LAB_180114741;
    uVar1 = *(uint *)(param_1 + 0x88);
  }
  if ((uVar1 < 2) && (*(longlong *)(param_1 + 0xb8) != 0)) {
    FUN_1801b2a70(param_1 + 0xb8);
  }
LAB_180114741:
  *(undefined8 *)(param_1 + 0x80) = 4;
  lVar4 = *(longlong *)(param_1 + 0xe8);
  if (-1 < lVar4) {
    lVar2 = *(longlong *)(param_1 + 0xf8);
    if (lVar2 != 0) {
      lVar4 = *(longlong *)(param_1 + 0xf0);
      puVar5 = (undefined8 *)(lVar4 + 0x18);
      lVar3 = 1;
      lVar6 = lVar2;
      do {
        lVar7 = lVar3;
        if (puVar5[-3] != 0) {
          (**(code **)(puVar5[-3] + 0x20))
                    (*puVar5,puVar5[-2],puVar5[-1],param_4,lVar6,lVar4,lVar3,param_1,uVar8);
          lVar7 = lVar3;
        }
        lVar3 = lVar7 + 1;
        puVar5 = puVar5 + 4;
      } while (lVar7 != lVar2);
      lVar4 = *(longlong *)(param_1 + 0xe8);
    }
    if (lVar4 != 0) {
      thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0xf0),lVar4 << 5,8);
    }
  }
  *(undefined8 *)(param_1 + 0xe8) = 0x8000000000000005;
  *(undefined1 *)(param_1 + 0x145) = 2;
  return;
}


