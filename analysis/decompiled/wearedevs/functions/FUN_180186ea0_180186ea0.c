/* FUN_180186ea0 @ 180186ea0 */

undefined8 FUN_180186ea0(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  longlong lVar4;
  HANDLE pvVar5;
  uint uVar6;
  undefined7 uVar8;
  ulonglong uVar7;
  ULONG_PTR CompletionKey;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  ulonglong *local_68;
  code *pcStack_60;
  undefined8 local_58;
  longlong local_48;
  HANDLE local_40;
  undefined8 *local_38;
  ulonglong local_30;
  HANDLE local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_40 = (HANDLE)0xffffffffffffffff;
  local_98[0] = 0;
  local_90 = 0;
  iVar1 = NtCreateFile(&local_40,0x100000,&DAT_180265298,local_98,0,0,3,1,0,0,0);
  local_28 = local_40;
  if (iVar1 == 0) {
    LOCK();
    UNLOCK();
    CompletionKey = DAT_1802fd748 + 2;
    DAT_1802fd748 = DAT_1802fd748 + 2;
    pvVar5 = CreateIoCompletionPort(local_40,(HANDLE)*param_1,CompletionKey,0);
    if (pvVar5 == (HANDLE)0x0) {
      GetLastError();
    }
    else {
      BVar3 = SetFileCompletionNotificationModes(local_40,'\x02');
      if (BVar3 != 0) {
        return 0;
      }
      GetLastError();
    }
    CloseHandle(local_28);
    return 1;
  }
  lVar4 = RtlNtStatusToDosError(iVar1);
  local_30 = lVar4 << 0x20 | 2;
  local_68 = &local_30;
  pcStack_60 = FUN_1801e3c90;
  FUN_1801ec780(local_88,&DAT_1802652c8,&local_68);
  local_58 = local_78;
  uVar6 = (uint)local_30 & 3;
  uVar2 = (uint)(local_30 >> 0x20);
  switch(uVar6) {
  case 0:
    uVar7 = (ulonglong)*(byte *)(local_30 + 0x10);
    break;
  case 1:
    uVar7 = (ulonglong)*(byte *)(local_30 + 0xf);
    break;
  case 2:
    uVar8 = (undefined7)
            ((ulonglong)
             ((longlong)&switchD_180186f8e::switchdataD_18026534c +
             (longlong)(int)(&switchD_180186f8e::switchdataD_18026534c)[uVar6]) >> 8);
    uVar7 = CONCAT71(uVar8,1);
    if ((int)uVar2 < 0x461) {
      if ((int)uVar2 < 0x150) {
        switch(uVar2) {
        case 2:
        case 3:
        case 0xf:
        case 0x35:
        case 0x43:
          uVar7 = 0;
          break;
        default:
          goto switchD_18018700f_caseD_4;
        case 5:
          break;
        case 8:
        case 0xe:
          uVar7 = CONCAT71(uVar8,0x26);
          break;
        case 0x11:
          uVar7 = CONCAT71(uVar8,0x1f);
          break;
        case 0x13:
          uVar7 = CONCAT71(uVar8,0x11);
          break;
        case 0x27:
        case 0x70:
          uVar7 = CONCAT71(uVar8,0x18);
          break;
        case 0x50:
        case 0xb7:
          uVar7 = CONCAT71(uVar8,0xc);
          break;
        case 0x57:
          goto switchD_18018700f_caseD_57;
        case 0x6d:
        case 0xe8:
          uVar7 = CONCAT71(uVar8,0xb);
          break;
        case 0x78:
          uVar7 = CONCAT71(uVar8,0x24);
          break;
        case 0x79:
        case 0x102:
          goto switchD_18018700f_caseD_79;
        case 0x7b:
        case 0xa1:
        case 0xce:
          uVar7 = CONCAT71(uVar8,0x21);
          break;
        case 0x84:
          uVar7 = CONCAT71(uVar8,0x19);
          break;
        case 0x91:
          uVar7 = CONCAT71(uVar8,0x10);
          break;
        case 0xaa:
          uVar7 = CONCAT71(uVar8,0x1c);
          break;
        case 0xdf:
          uVar7 = CONCAT71(uVar8,0x1b);
          break;
        case 0x10b:
          uVar7 = CONCAT71(uVar8,0xe);
        }
        break;
      }
      if ((int)uVar2 < 0x3e3) {
        if (uVar2 == 0x150) {
          uVar7 = CONCAT71(uVar8,0xf);
          break;
        }
        if (uVar2 == 0x252) goto switchD_18018700f_caseD_79;
      }
      else if ((uVar2 == 0x3e3) || (uVar2 == 0x41d)) goto switchD_18018700f_caseD_79;
      goto switchD_18018700f_caseD_4;
    }
    if ((int)uVar2 < 0x271d) {
      if ((int)uVar2 < 0x781) {
        if ((int)uVar2 < 0x4cf) {
          if (uVar2 == 0x461) goto switchD_18018700f_caseD_79;
          if (uVar2 == 0x46b) {
            uVar7 = CONCAT71(uVar8,0x1e);
            break;
          }
          if (uVar2 == 0x476) {
            uVar7 = CONCAT71(uVar8,0x20);
            break;
          }
        }
        else if ((int)uVar2 < 0x50f) {
          if (uVar2 == 0x4cf) goto switchD_18018707d_caseD_2743;
          if (uVar2 == 0x4d0) goto switchD_18018707d_caseD_2751;
        }
        else {
          if (uVar2 == 0x50f) goto switchD_18018707d_caseD_2755;
          if (uVar2 == 0x5b4) goto switchD_18018700f_caseD_79;
        }
      }
      else if ((int)uVar2 < 0x1b80) {
        if (uVar2 == 0x781) {
          uVar7 = CONCAT71(uVar8,0x12);
          break;
        }
        if ((uVar2 == 0x1716) || (uVar2 == 0x1b64)) goto switchD_18018700f_caseD_79;
      }
      else if ((int)uVar2 < 0x2022) {
        if ((uVar2 == 0x1b80) || (uVar2 == 0x1f4e)) goto switchD_18018700f_caseD_79;
      }
      else if ((uVar2 == 0x2022) || (uVar2 == 0x25e9)) goto switchD_18018700f_caseD_79;
      goto switchD_18018700f_caseD_4;
    }
    switch(uVar2) {
    case 0x271d:
      break;
    case 0x2726:
switchD_18018700f_caseD_57:
      uVar7 = CONCAT71(uVar8,0x14);
      break;
    case 0x2733:
      uVar7 = CONCAT71(uVar8,0xd);
      break;
    case 0x2740:
      uVar7 = CONCAT71(uVar8,8);
      break;
    case 0x2741:
      uVar7 = CONCAT71(uVar8,9);
      break;
    case 0x2742:
      uVar7 = CONCAT71(uVar8,10);
      break;
    case 0x2743:
switchD_18018707d_caseD_2743:
      uVar7 = CONCAT71(uVar8,5);
      break;
    case 0x2745:
      uVar7 = CONCAT71(uVar8,6);
      break;
    case 0x2746:
      uVar7 = CONCAT71(uVar8,3);
      break;
    case 0x2749:
      uVar7 = CONCAT71(uVar8,7);
      break;
    case 0x274c:
switchD_18018700f_caseD_79:
      uVar7 = CONCAT71((int7)(uVar7 >> 8),0x16);
      break;
    case 0x274d:
      uVar7 = CONCAT71(uVar8,2);
      break;
    case 0x2751:
switchD_18018707d_caseD_2751:
      uVar7 = CONCAT71(uVar8,4);
      break;
    case 0x2755:
switchD_18018707d_caseD_2755:
      uVar7 = CONCAT71(uVar8,0x1a);
      break;
    default:
      uVar7 = (ulonglong)(uVar2 - 0x3c2a);
      if ((uVar2 - 0x3c2a < 2) || (uVar2 == 0x35ed)) goto switchD_18018700f_caseD_79;
    case 0x271e:
    case 0x271f:
    case 0x2720:
    case 0x2721:
    case 0x2722:
    case 0x2723:
    case 0x2724:
    case 0x2725:
    case 0x2727:
    case 0x2728:
    case 0x2729:
    case 0x272a:
    case 0x272b:
    case 0x272c:
    case 0x272d:
    case 0x272e:
    case 0x272f:
    case 0x2730:
    case 0x2731:
    case 0x2732:
    case 0x2734:
    case 0x2735:
    case 0x2736:
    case 0x2737:
    case 0x2738:
    case 0x2739:
    case 0x273a:
    case 0x273b:
    case 0x273c:
    case 0x273d:
    case 0x273e:
    case 0x273f:
    case 0x2744:
    case 0x2747:
    case 0x2748:
    case 0x274a:
    case 0x274b:
    case 0x274e:
    case 0x274f:
    case 0x2750:
    case 0x2752:
    case 0x2753:
    case 0x2754:
switchD_18018700f_caseD_4:
      uVar7 = CONCAT71((int7)(uVar7 >> 8),0x29);
    }
    break;
  case 3:
    uVar7 = (ulonglong)uVar2;
  }
  FUN_18018c8e0(uVar7,local_88);
  if (((uint)local_30 & 3) == 1) {
    local_48 = local_30 - 1;
    local_28 = *(HANDLE *)(local_30 - 1);
    local_38 = *(undefined8 **)(local_30 + 7);
    if ((code *)*local_38 != (code *)0x0) {
      (*(code *)*local_38)(local_28);
    }
    if (local_38[1] != 0) {
      thunk_FUN_1801d3330(local_28,local_38[1],local_38[2]);
    }
    thunk_FUN_1801d3330(local_48,0x18,8);
  }
  return 1;
}


