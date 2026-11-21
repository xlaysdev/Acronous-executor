/* FUN_180133210 @ 180133210 */

/* WARNING: Type propagation algorithm not settling */

void FUN_180133210(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38 [16];
  
  FUN_1801ef980(local_38,param_2,"Stream",6);
  uVar3 = FUN_1801ef590(local_38,&DAT_180248887,2,(longlong)param_1 + 300,&DAT_180249bb8);
  uVar3 = FUN_1801ef590(uVar3,"state",5,param_1 + 8,&PTR_FUN_180249bd8);
  uVar3 = FUN_1801ef590(uVar3,"is_counted",10,param_1 + 0x27,&DAT_180249c00);
  uVar3 = FUN_1801ef590(uVar3,"ref_count",9,param_1 + 0x10,&DAT_180249c30);
  if ((int)param_1[0x1a] != 0) {
    uVar3 = FUN_1801ef590(uVar3,"next_pending_send",0x11,param_1 + 0x1a,&DAT_180249c60);
  }
  if (*(char *)((longlong)param_1 + 0x139) == '\x01') {
    uVar3 = FUN_1801ef590(uVar3,"is_pending_send",0xf,(longlong)param_1 + 0x139,&DAT_180249c00);
  }
  uVar3 = FUN_1801ef590(uVar3,"send_flow",9,param_1 + 0x11,"");
  uVar3 = FUN_1801ef590(uVar3,"requested_send_capacity",0x17,param_1 + 0x26,&DAT_180249ad8);
  uVar3 = FUN_1801ef590(uVar3,"buffered_send_data",0x12,param_1 + 0x12,&DAT_180249c30);
  local_3b = param_1[0x13] != 0;
  if ((bool)local_3b) {
    uVar3 = FUN_1801ef590(uVar3,"send_task",9,&local_3b,&DAT_180249cf8);
  }
  if (*param_1 != 0) {
    uVar3 = FUN_1801ef590(uVar3,"pending_send",0xc,param_1,&DAT_180249d28);
  }
  if (*(int *)((longlong)param_1 + 0xdc) != 0) {
    uVar3 = FUN_1801ef590(uVar3,"next_pending_send_capacity",0x1a,(longlong)param_1 + 0xdc,
                          &DAT_180249c60);
  }
  if (*(char *)((longlong)param_1 + 0x13a) == '\x01') {
    uVar3 = FUN_1801ef590(uVar3,"is_pending_send_capacity",0x18,(longlong)param_1 + 0x13a,
                          &DAT_180249c00);
    cVar1 = *(char *)((longlong)param_1 + 0x13b);
  }
  else {
    cVar1 = *(char *)((longlong)param_1 + 0x13b);
  }
  if (cVar1 == '\x01') {
    uVar3 = FUN_1801ef590(uVar3,"send_capacity_inc",0x11,(longlong)param_1 + 0x13b,&DAT_180249c00);
    iVar2 = (int)param_1[0x1d];
  }
  else {
    iVar2 = (int)param_1[0x1d];
  }
  if (iVar2 != 0) {
    uVar3 = FUN_1801ef590(uVar3,"next_open",9,param_1 + 0x1d,&DAT_180249c60);
  }
  if (*(char *)((longlong)param_1 + 0x13c) == '\x01') {
    uVar3 = FUN_1801ef590(uVar3,"is_pending_open",0xf,(longlong)param_1 + 0x13c,&DAT_180249c00);
    cVar1 = *(char *)((longlong)param_1 + 0x13d);
  }
  else {
    cVar1 = *(char *)((longlong)param_1 + 0x13d);
  }
  if (cVar1 == '\x01') {
    uVar3 = FUN_1801ef590(uVar3,"is_pending_push",0xf,(longlong)param_1 + 0x13d,&DAT_180249c00);
    iVar2 = *(int *)((longlong)param_1 + 0xf4);
  }
  else {
    iVar2 = *(int *)((longlong)param_1 + 0xf4);
  }
  if (iVar2 != 0) {
    uVar3 = FUN_1801ef590(uVar3,"next_pending_accept",0x13,(longlong)param_1 + 0xf4,&DAT_180249c60);
  }
  if (*(char *)((longlong)param_1 + 0x13e) == '\x01') {
    uVar3 = FUN_1801ef590(uVar3,"is_pending_accept",0x11,(longlong)param_1 + 0x13e,&DAT_180249c00);
  }
  uVar3 = FUN_1801ef590(uVar3,"recv_flow",9,param_1 + 0x15,"");
  uVar3 = FUN_1801ef590(uVar3,"in_flight_recv_data",0x13,(longlong)param_1 + 0x134,&DAT_180249ad8);
  if ((int)param_1[0x20] != 0) {
    uVar3 = FUN_1801ef590(uVar3,"next_window_update",0x12,param_1 + 0x20,&DAT_180249c60);
  }
  if (*(char *)((longlong)param_1 + 0x13f) == '\x01') {
    uVar3 = FUN_1801ef590(uVar3,"is_pending_window_update",0x18,(longlong)param_1 + 0x13f,
                          &DAT_180249c00);
    iVar2 = (int)param_1[0xf];
  }
  else {
    iVar2 = (int)param_1[0xf];
  }
  if (iVar2 == 1000000000) {
    iVar2 = *(int *)((longlong)param_1 + 0x10c);
  }
  else {
    uVar3 = FUN_1801ef590(uVar3,"reset_at",8,param_1 + 0xe,"");
    iVar2 = *(int *)((longlong)param_1 + 0x10c);
  }
  if (iVar2 != 0) {
    uVar3 = FUN_1801ef590(uVar3,"next_reset_expire",0x11,(longlong)param_1 + 0x10c,&DAT_180249c60);
  }
  if (param_1[3] != 0) {
    uVar3 = FUN_1801ef590(uVar3,"pending_recv",0xc,param_1 + 3,&DAT_180249d28);
  }
  if ((char)param_1[0x28] == '\x01') {
    uVar3 = FUN_1801ef590(uVar3,"is_recv",7,param_1 + 0x28,&DAT_180249c00);
  }
  local_3a = param_1[0x16] != 0;
  if ((bool)local_3a) {
    uVar3 = FUN_1801ef590(uVar3,"recv_task",9,&local_3a,&DAT_180249cf8);
  }
  local_39 = param_1[0x18] != 0;
  if ((bool)local_39) {
    uVar3 = FUN_1801ef590(uVar3,"push_task",9,&local_39,&DAT_180249cf8);
  }
  if ((int)param_1[0x23] != 0) {
    uVar3 = FUN_1801ef590(uVar3,"pending_push_promises",0x15,param_1 + 0x23,&DAT_180249e88);
  }
  uVar3 = FUN_1801ef590(uVar3,"content_length",0xe,param_1 + 6,&DAT_180249ec0);
  FUN_1801ef720(uVar3);
  return;
}


