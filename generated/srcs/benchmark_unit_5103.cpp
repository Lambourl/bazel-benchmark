#include "bench/fib.hpp"

// RE Benchmark TU 5103 of 20000 (depth=28, stamp="default")
namespace bench_tu_5103 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5103>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5103
