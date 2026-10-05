#include "bench/fib.hpp"

// RE Benchmark TU 8802 of 20000 (depth=28, stamp="default")
namespace bench_tu_8802 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8802>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8802
