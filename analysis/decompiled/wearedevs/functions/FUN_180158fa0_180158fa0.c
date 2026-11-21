/* FUN_180158fa0 @ 180158fa0 */

void FUN_180158fa0(undefined2 *param_1,longlong param_2)

{
  char cVar1;
  char **local_48;
  undefined *local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  char ***local_20;
  undefined8 local_18;
  undefined *local_10;
  
  if (*(char *)(param_2 + 0x9c) == '\x01') {
    *(undefined1 *)param_1 = 3;
    return;
  }
  if ((*(ulonglong *)PTR_DAT_1802fd448 < 2) &&
     (((DAT_1802fd250 - 1 < 2 ||
       ((DAT_1802fd250 != 0 && (cVar1 = FUN_1801faaf0(&PTR_DAT_1802fd240), cVar1 != '\0')))) &&
      (cVar1 = FUN_1801601d0(PTR_DAT_1802fd240), cVar1 != '\0')))) {
    local_10 = PTR_DAT_1802fd240 + 0x30;
    local_38 = 
    "connection error PROTOCOL_ERROR -- recv_push_promise: push is disabled;event C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\h2-0.4.18\\src\\proto\\streams\\recv.rs:588"
    ;
    local_30 = 0x8f;
    local_48 = &local_38;
    local_40 = &DAT_180258dd0;
    local_28 = 1;
    local_20 = &local_48;
    local_18 = 1;
    FUN_180160ae0(PTR_DAT_1802fd240,&local_28);
  }
  *param_1 = 0x101;
  *(undefined4 *)(param_1 + 2) = 1;
  *(undefined ***)(param_1 + 4) = &PTR_LAB_180258e00;
  *(undefined8 *)(param_1 + 8) = 1;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


