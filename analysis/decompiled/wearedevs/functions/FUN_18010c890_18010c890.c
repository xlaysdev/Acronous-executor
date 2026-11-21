/* FUN_18010c890 @ 18010c890 */

void FUN_18010c890(short *param_1,undefined8 param_2)

{
  undefined1 local_28 [24];
  
  FUN_1801ef930(local_28,param_2,"ConnectError",0xc);
  FUN_1801ef320(local_28,param_1 + 0x10,&DAT_18023cd98);
  if (*param_1 != 2) {
    FUN_1801ef320(local_28,param_1,&DAT_18023cdb8);
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1801ef320(local_28,param_1 + 0x18,&PTR_FUN_18023cdd8);
  }
  FUN_1801ef450(local_28);
  return;
}


