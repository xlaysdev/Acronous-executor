/* FUN_180026670 @ 180026670 */

void FUN_180026670(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x40) + 0x20))
              (*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x48),
               *(undefined8 *)(param_1 + 0x50),param_4,param_1,0xfffffffffffffffe);
  }
                    /* WARNING: Could not recover jumptable at 0x0001800266bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x18) + 0x20))
            (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}


