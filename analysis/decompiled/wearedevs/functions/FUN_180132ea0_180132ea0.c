/* FUN_180132ea0 @ 180132ea0 */

/* WARNING: Type propagation algorithm not settling */

void FUN_180132ea0(int *param_1,undefined8 param_2)

{
  int iVar1;
  int local_24;
  undefined1 local_20 [16];
  
  FUN_1801ef980(local_20,param_2,"Settings",8);
  FUN_1801ef590(local_20,"flags",5,param_1 + 0xe,"");
  if (*param_1 == 1) {
    local_24 = param_1[1];
    FUN_1801ef590(local_20,"header_ta",0x11,&local_24,&DAT_180249ad8);
    iVar1 = param_1[2];
  }
  else {
    iVar1 = param_1[2];
  }
  if (iVar1 == 1) {
    local_24 = param_1[3];
    FUN_1801ef590(local_20,"enable_push",0xb,&local_24,&DAT_180249ad8);
    iVar1 = param_1[4];
  }
  else {
    iVar1 = param_1[4];
  }
  if (iVar1 == 1) {
    local_24 = param_1[5];
    FUN_1801ef590(local_20,"max_concurrent_streams",0x16,&local_24,&DAT_180249ad8);
    iVar1 = param_1[6];
  }
  else {
    iVar1 = param_1[6];
  }
  if (iVar1 == 1) {
    local_24 = param_1[7];
    FUN_1801ef590(local_20,"initial_window_size",0x13,&local_24,&DAT_180249ad8);
    iVar1 = param_1[8];
  }
  else {
    iVar1 = param_1[8];
  }
  if (iVar1 == 1) {
    local_24 = param_1[9];
    FUN_1801ef590(local_20,"max_frame_size",0xe,&local_24,&DAT_180249ad8);
    iVar1 = param_1[10];
  }
  else {
    iVar1 = param_1[10];
  }
  if (iVar1 == 1) {
    local_24 = param_1[0xb];
    FUN_1801ef590(local_20,"max_header_list_size",0x14,&local_24,&DAT_180249ad8);
    iVar1 = param_1[0xc];
  }
  else {
    iVar1 = param_1[0xc];
  }
  if (iVar1 == 1) {
    local_24 = param_1[0xd];
    FUN_1801ef590(local_20,"enable_connect_protocol",0x17,&local_24,&DAT_180249ad8);
  }
  FUN_1801ef720(local_20);
  return;
}


