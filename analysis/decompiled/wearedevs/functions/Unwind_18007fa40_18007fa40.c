/* Unwind@18007fa40 @ 18007fa40 */

void Unwind_18007fa40(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  lVar7 = *(longlong *)(param_2 + 0x40);
  lVar2 = *(longlong *)(param_2 + 0x28);
  do {
    if (lVar7 == lVar1) {
      return;
    }
    uVar3 = *(ulonglong *)(lVar2 + lVar7 * 0x50);
    if (uVar3 < 3) {
      lVar8 = 0x18;
      lVar6 = 0x10;
      lVar5 = 0x20;
      lVar9 = 8;
LAB_18007fa86:
      lVar4 = lVar7 * 0x50 + lVar2;
      (**(code **)(*(longlong *)(lVar4 + lVar9) + 0x20))
                (*(undefined8 *)(lVar4 + lVar5),*(undefined8 *)(lVar4 + lVar6),
                 *(undefined8 *)(lVar4 + lVar8));
    }
    else if ((int)uVar3 != 3) {
      lVar8 = 0x28;
      lVar6 = 0x20;
      lVar5 = 0x30;
      lVar9 = 0x18;
      goto LAB_18007fa86;
    }
    lVar7 = lVar7 + 1;
  } while( true );
}


