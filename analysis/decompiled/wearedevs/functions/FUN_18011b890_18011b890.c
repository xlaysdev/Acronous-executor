/* FUN_18011b890 @ 18011b890 */

void FUN_18011b890(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))
              (*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x40),
               *(undefined8 *)(param_1 + 0x48),param_4,param_1,0xfffffffffffffffe);
  }
                    /* WARNING: Could not recover jumptable at 0x00018011b8df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x18) + 0x20))
            (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}


