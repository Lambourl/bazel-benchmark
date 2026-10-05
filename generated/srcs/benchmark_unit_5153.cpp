#include "bench/fib.hpp"

// RE Benchmark TU 5153 of 20000 (depth=28, stamp="default")
namespace bench_tu_5153 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5153>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5153
