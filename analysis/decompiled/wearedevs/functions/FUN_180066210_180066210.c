/* FUN_180066210 @ 180066210 */

void FUN_180066210(undefined1 *param_1)

{
  switch(*param_1) {
  case 0:
  case 6:
                    /* WARNING: Could not recover jumptable at 0x000180066257. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 8) + 0x20))
              (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10),
               *(undefined8 *)(param_1 + 0x18));
    return;
  case 1:
    FUN_1800430f0(param_1 + 8);
    break;
  default:
    return;
  case 3:
    FUN_1800430f0(param_1 + 8);
  }
  FUN_1800663c0(param_1 + 0x68);
  return;
}


