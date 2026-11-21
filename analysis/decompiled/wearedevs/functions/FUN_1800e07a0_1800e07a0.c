/* FUN_1800e07a0 @ 1800e07a0 */

void FUN_1800e07a0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)(param_1 + 0x240);
  if (cVar1 == '\0') {
    FUN_180091e90(param_1);
    if (1 < *(byte *)(param_1 + 0x100)) {
      plVar2 = *(longlong **)(param_1 + 0x108);
      (**(code **)(*plVar2 + 0x20))(plVar2[3],plVar2[1],plVar2[2]);
      thunk_FUN_1801d3330(plVar2,0x20,8);
    }
                    /* WARNING: Could not recover jumptable at 0x0001800e08a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 0x110) + 0x20))
              (*(undefined8 *)(param_1 + 0x128),*(undefined8 *)(param_1 + 0x118),
               *(undefined8 *)(param_1 + 0x120));
    return;
  }
  if (cVar1 == '\x03') {
    FUN_1800e05a0(param_1 + 0x248);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_1800e2bc0(param_1 + 0x2c0);
    FUN_1800e1260(param_1 + 0x248);
  }
  *(undefined1 *)(param_1 + 0x242) = 0;
  if (*(char *)(param_1 + 0x241) != '\0') {
    FUN_180091e90(param_1 + 0x140);
  }
  *(undefined1 *)(param_1 + 0x241) = 0;
  return;
}


