package SOLID_EX;

import java.util.function.Function;

public enum MemberType {
    FAMILY("패밀리", origin -> (int) (origin * 0.9)),
    VIP("VIP", origin -> (int) (origin * 0.8));

    private final String type;
    private final Function<Integer, Integer> expression;

    MemberType(String type, Function<Integer, Integer> expression) {
        this.type = type;
        this.expression = expression;
    }

    public Integer calc(int origin) {
        return expression.apply(origin);
    }
}
