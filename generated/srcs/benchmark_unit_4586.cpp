#include "bench/fib.hpp"

// RE Benchmark TU 4586 of 20000 (depth=28, stamp="default")
namespace bench_tu_4586 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4586>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4586
