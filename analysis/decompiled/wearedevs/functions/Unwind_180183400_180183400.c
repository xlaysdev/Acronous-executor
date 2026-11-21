/* Unwind@180183400 @ 180183400 */

void Unwind_180183400(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  bVar2 = *(byte *)(param_2 + 0x468);
  bVar3 = *(byte *)(param_2 + 0x469);
  bVar4 = *(byte *)(param_2 + 0x46a);
  lVar5 = *(longlong *)(param_2 + 0x430);
  lVar6 = *(longlong *)(param_2 + 0x438);
  lVar7 = 0;
  if (lVar6 != 0) {
    do {
      lVar1 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      FUN_18016bc40(*(undefined8 *)(lVar5 + lVar1));
    } while (lVar6 != lVar7);
  }
  if (*(longlong *)(param_2 + 0x428) != 0) {
    thunk_FUN_1801d3330(lVar5,*(longlong *)(param_2 + 0x428) << 3,8);
  }
  *(byte *)(param_2 + 0x46d) = bVar4 & 1;
  *(byte *)(param_2 + 0x46c) = bVar3 & 1;
  *(byte *)(param_2 + 0x46b) = bVar2 & 1;
  return;
}


