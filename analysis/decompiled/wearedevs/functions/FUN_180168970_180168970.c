/* FUN_180168970 @ 180168970 */

ulonglong FUN_180168970(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 unaff_R12;
  ulonglong uVar9;
  undefined1 unaff_R13B;
  undefined ***local_88;
  undefined ***local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined **local_60;
  longlong *local_58;
  uint local_50;
  byte local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  plVar1 = (longlong *)(lVar4 + 0x60);
  local_58 = plVar1;
  if ((*(char *)(lVar4 + 0x68) != '\x01') &&
     (local_58 = (longlong *)FUN_1801fb130(plVar1,0), local_58 == (longlong *)0x0)) {
    uVar9 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),2);
LAB_180168b1c:
    return uVar9 & 0xffffffff;
  }
  local_58 = (longlong *)*local_58;
  LOCK();
  lVar2 = *local_58;
  *local_58 = *local_58 + 1;
  UNLOCK();
  if (*local_58 == 0 || SCARRY8(lVar2,1) != *local_58 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  local_58 = local_58 + 2;
  local_60 = &PTR_LAB_180260cb0;
  local_88 = &local_60;
  local_78 = 0;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_80 = local_88;
  local_68 = param_2;
  do {
    bVar3 = *(byte *)(lVar2 + 0xb8);
    if (bVar3 == 1) {
LAB_180168a50:
      bVar3 = *(byte *)(lVar2 + 0xb4);
      unaff_R13B = *(undefined1 *)(lVar2 + 0xb5);
      *(undefined2 *)(lVar2 + 0xb4) = 0x8001;
    }
    else if (bVar3 != 2) {
      FUN_1801d8880(lVar2 + 0x70,FUN_18016d130);
      *(undefined1 *)(lVar2 + 0xb8) = 1;
      goto LAB_180168a50;
    }
    local_50 = (uint)bVar3;
    local_4a = bVar3;
    local_49 = unaff_R13B;
    uVar7 = FUN_180178140(&local_68,&local_88);
    uVar9 = (ulonglong)uVar7;
    cVar6 = (char)local_50;
    if (cVar6 != '\x02') {
      if (*(char *)(lVar2 + 0xb8) != '\x01') {
        if (*(char *)(lVar2 + 0xb8) == '\x02') goto joined_r0x000180168abc;
        FUN_1801d8880(lVar2 + 0x70,FUN_18016d130);
        *(undefined1 *)(lVar2 + 0xb8) = 1;
      }
      *(char *)(lVar2 + 0xb4) = cVar6;
      *(undefined1 *)(lVar2 + 0xb5) = unaff_R13B;
    }
joined_r0x000180168abc:
    if ((char)uVar7 != '\x02') {
      (*(code *)local_60[3])(local_58);
      goto LAB_180168b1c;
    }
    plVar8 = plVar1;
    if ((*(char *)(lVar4 + 0x68) != '\x01') &&
       (plVar8 = (longlong *)FUN_1801fb130(plVar1,0), plVar8 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_4a,&DAT_180260b88,
                    &PTR_s_C__Users_burne__cargo_registry_s_180260c98);
    }
    FUN_180168f60(*plVar8 + 0x10);
  } while( true );
}


