/* Unwind@1801dc340 @ 1801dc340 */

void Unwind_1801dc340(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_2 + 0x450) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x458),*(longlong *)(param_2 + 0x450) * 2,2);
  }
  lVar1 = **(longlong **)(param_2 + 0x470);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330((*(longlong **)(param_2 + 0x470))[1],lVar1 * 2,2);
  }
  return;
}


