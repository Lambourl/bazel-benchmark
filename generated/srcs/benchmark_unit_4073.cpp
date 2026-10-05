#include "bench/fib.hpp"

// RE Benchmark TU 4073 of 20000 (depth=28, stamp="default")
namespace bench_tu_4073 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4073>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4073
