/* Unwind@1801ccc00 @ 1801ccc00 */

void Unwind_1801ccc00(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x80);
  lVar2 = *(longlong *)(param_2 + 0x88);
  for (lVar3 = *(longlong *)(param_2 + 0x70); lVar3 != lVar1; lVar3 = lVar3 + 1) {
    FUN_1801cca30(lVar3 * 0x20 + lVar2);
  }
  return;
}


