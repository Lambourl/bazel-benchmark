#include "bench/fib.hpp"

// RE Benchmark TU 804 of 20000 (depth=28, stamp="default")
namespace bench_tu_804 {
constexpr unsigned long long result = ::bench::slow_fib<28, 804>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_804
