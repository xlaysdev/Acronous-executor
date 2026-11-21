/* Unwind@180125700 @ 180125700 */

void Unwind_180125700(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x40);
  lVar2 = *(longlong *)(param_2 + 0x28);
  for (lVar3 = *(longlong *)(param_2 + 0x38); lVar3 != lVar1; lVar3 = lVar3 + 1) {
    FUN_18011b890(lVar3 * 0x60 + lVar2);
  }
  return;
}


