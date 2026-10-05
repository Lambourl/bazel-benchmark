#include "bench/fib.hpp"

// RE Benchmark TU 7076 of 20000 (depth=28, stamp="default")
namespace bench_tu_7076 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7076>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7076
