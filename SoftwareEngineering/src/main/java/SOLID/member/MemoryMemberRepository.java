package SOLID.member;

import java.util.*;

public class MemoryMemberRepository implements MemberRepository {
    static Map<Long, Member> store = new HashMap<>();
    @Override
    public void save(Member member) {
        store.put(member.getId(), member);
    }
    @Override
    public Member findById(Long memberId) {
        return store.get(memberId);
    }
}