#include "bench/fib.hpp"

// RE Benchmark TU 73 of 20000 (depth=28, stamp="default")
namespace bench_tu_73 {
constexpr unsigned long long result = ::bench::slow_fib<28, 73>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_73
