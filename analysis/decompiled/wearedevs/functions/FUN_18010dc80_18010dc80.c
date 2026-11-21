/* FUN_18010dc80 @ 18010dc80 */

void FUN_18010dc80(char *param_1)

{
  longlong *plVar1;
  
  if (*param_1 == '\x02') {
    plVar1 = *(longlong **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x20))(plVar1[3],plVar1[1],plVar1[2]);
    thunk_FUN_1801d3330(plVar1,0x20,8);
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x10) + 0x20))
              (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20));
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018010dd0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x20))
            (*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x40));
  return;
}


