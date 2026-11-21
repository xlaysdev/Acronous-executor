/* FUN_180178d90 @ 180178d90 */

void FUN_180178d90(undefined8 *param_1,longlong param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  char cVar4;
  char cVar5;
  undefined8 local_60;
  undefined1 local_58;
  byte local_57;
  undefined4 local_56;
  undefined2 local_52;
  undefined8 local_50;
  undefined1 local_48;
  undefined4 local_40;
  undefined2 local_3c;
  char local_3a;
  char local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0xb8) != '\x01') {
    if (*(char *)(lVar1 + 0xb8) == '\x02') {
      cVar5 = '\0';
      cVar4 = '\0';
      goto LAB_180178e25;
    }
    param_4 = param_4 & 0xffffffff;
    FUN_1801d8880(lVar1 + 0x70,FUN_18016d130);
    *(undefined1 *)(lVar1 + 0xb8) = 1;
  }
  cVar5 = *(char *)(lVar1 + 0xb4);
  cVar4 = *(char *)(lVar1 + 0xb5);
  cVar2 = cVar4;
  if (cVar5 == '\x01') {
    if (cVar4 == '\0') {
      FUN_18016c640(*param_3,&PTR_s_C__Users_burne__cargo_registry_s_180261968,param_3,param_4);
      *(undefined1 *)((longlong)param_1 + 9) = 3;
      return;
    }
    cVar2 = cVar4 + -1;
  }
  *(char *)(lVar1 + 0xb5) = cVar2;
LAB_180178e25:
  local_3a = cVar5;
  local_39 = cVar4;
  FUN_180180730(&local_60,param_2 + 0x80);
  if (local_57 == 2) {
    *(undefined1 *)((longlong)param_1 + 9) = 3;
  }
  else {
    local_48 = local_58;
    local_50 = local_60;
    local_40 = local_56;
    local_3c = local_52;
    if ((local_57 & 1) == 0) {
      *(undefined1 *)(param_1 + 1) = local_58;
      *param_1 = local_60;
      *(undefined4 *)((longlong)param_1 + 10) = local_56;
      *(undefined2 *)((longlong)param_1 + 0xe) = local_52;
      *(undefined1 *)((longlong)param_1 + 9) = 0;
      return;
    }
    uVar3 = FUN_1801d6710(CONCAT71((uint7)(byte)((ushort)local_52 >> 8),0x28),
                          "A Tokio 1.x context was found, but it is being shutdown.",0x38);
    *param_1 = uVar3;
    *(undefined1 *)((longlong)param_1 + 9) = 2;
  }
  if (cVar5 != '\0') {
    if (*(char *)(lVar1 + 0xb8) != '\x01') {
      if (*(char *)(lVar1 + 0xb8) == '\x02') {
        return;
      }
      FUN_1801d8880(lVar1 + 0x70,FUN_18016d130);
      *(undefined1 *)(lVar1 + 0xb8) = 1;
    }
    *(undefined1 *)(lVar1 + 0xb4) = 1;
    *(char *)(lVar1 + 0xb5) = cVar4;
  }
  return;
}


