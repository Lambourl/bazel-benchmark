#include "bench/fib.hpp"

// RE Benchmark TU 3076 of 20000 (depth=28, stamp="default")
namespace bench_tu_3076 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3076>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3076
