/* FUN_18007c8d0 @ 18007c8d0 */

void FUN_18007c8d0(byte *param_1)

{
  longlong *plVar1;
  
  if (1 < *param_1) {
    plVar1 = *(longlong **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x20))(plVar1[3],plVar1[1],plVar1[2]);
    thunk_FUN_1801d3330(plVar1,0x20,8);
  }
                    /* WARNING: Could not recover jumptable at 0x00018007c939. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x10) + 0x20))
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x18),
             *(undefined8 *)(param_1 + 0x20));
  return;
}


